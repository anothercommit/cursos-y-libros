import random
import time

DIFFICULTY = 40  # How many random slides a puzzle starts with.
SIZE = 3
random.seed(1)

BLANK = 0
UP = 'up'
DOWN = 'down'
LEFT = 'left'
RIGHT = 'right'


def displayBoard(board):
    """Display the tiles stored in `board` on the screen."""
    for y in range(SIZE):
        for x in range(SIZE):
            if board[y * SIZE + x] == BLANK:
                print('__ ', end='')  # Display blank tile.
            else:
                print(str(board[y * SIZE + x]).rjust(2) + ' ', end='')
        print()


def getNewBoard():
    """Return a list that represents a new tile puzzle."""
    board = []
    for i in range(1, SIZE * SIZE):
        board.append(i)
    board.append(BLANK)
    return board


def findBlankSpace(board):
    """Return an [x, y] list of the blank space's location."""
    for x in range(SIZE):
        for y in range(SIZE):
            if board[y * SIZE + x] == BLANK:
                return [x, y]


def makeMove(board, move):
    """Modify `board` in place to carry out the slide in `move`."""
    bx, by = findBlankSpace(board)
    blankIndex = by * SIZE + bx

    if move == UP:
        tileIndex = (by + 1) * SIZE + bx
    elif move == LEFT:
        tileIndex = by * SIZE + (bx + 1)
    elif move == DOWN:
        tileIndex = (by - 1) * SIZE + bx
    elif move == RIGHT:
        tileIndex = by * SIZE + (bx - 1)

    board[blankIndex], board[tileIndex] = board[tileIndex], board[blankIndex]


def undoMove(board, move):
    """Do the opposite move of `move` to undo it on `board`."""
    if move == UP:
        makeMove(board, DOWN)
    elif move == DOWN:
        makeMove(board, UP)
    elif move == LEFT:
        makeMove(board, RIGHT)
    elif move == RIGHT:
        makeMove(board, LEFT)


def getValidMoves(board, prevMove=None):
    """Returns a list of the valid moves to make on this board. If
    prevMove is provided, do not include the move that would undo it."""

    bx, by = findBlankSpace(board)

    validMoves = []
    if by != SIZE - 1 and prevMove != DOWN:
        validMoves.append(UP)

    if bx != SIZE - 1 and prevMove != RIGHT:
        validMoves.append(LEFT)

    if by != 0 and prevMove != UP:
        validMoves.append(DOWN)

    if bx != 0 and prevMove != LEFT:
        validMoves.append(RIGHT)

    return validMoves


def getNewPuzzle():
    """Get a new puzzle by making random slides from the solved state."""
    board = getNewBoard()
    for i in range(DIFFICULTY):
        validMoves = getValidMoves(board)
        makeMove(board, random.choice(validMoves))
    return board


def solve(board, maxMoves):
    """Attempt to solve the puzzle in `board` in at most `maxMoves`
    moves. Returns True if solved, otherwise False."""
    print('Attempting to solve in at most', maxMoves, 'moves...')
    solutionMoves = []  # A list of UP, DOWN, LEFT, RIGHT values.
    solved = attemptMove(board, solutionMoves, maxMoves, None)

    if solved:
        displayBoard(board)
        for move in solutionMoves:
            print('Move', move)
            makeMove(board, move)
            print()  # Print a newline.
            displayBoard(board)
            print()  # Print a newline.

        print('Solved in', len(solutionMoves), 'moves:')
        print(', '.join(solutionMoves))
        return True  # Puzzle was solved.
    else:
        return False  # Unable to solve in maxMoves moves.


def attemptMove(board, movesMade, movesRemaining, prevMove):
    """A recursive function that attempts all possible moves on `board`
    until it finds a solution or reaches the `maxMoves` limit.
    Returns True if a solution was found, in which case `movesMade`
    contains the series of moves to solve the puzzle. Returns False
    if `movesRemaining` is less than 0."""

    if movesRemaining < 0:
        return False

    if board == SOLVED_BOARD:
        return True

    for move in getValidMoves(board, prevMove):
        makeMove(board, move)
        movesMade.append(move)

        if attemptMove(board, movesMade, movesRemaining - 1, move):
            undoMove(board, move)  # Reset to the original puzzle.
            return True

        undoMove(board, move)
        movesMade.pop()  # Remove the last move since it was undone.
    return False  # BASE CASE - Unable to find a solution.


SOLVED_BOARD = getNewBoard()
puzzleBoard = getNewPuzzle()
displayBoard(puzzleBoard)
startTime = time.time()

maxMoves = 10
while True:
    if solve(puzzleBoard, maxMoves):
        break  # Break out of the loop when a solution is found.
    maxMoves += 1
print('Run in', round(time.time() - startTime, 3), 'seconds.')
