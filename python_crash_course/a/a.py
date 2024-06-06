import os

board = [' ' for _ in range(9)]

player_markers = ['X', 'O']


def print_board():
    os.system('cls' if os.name == 'nt' else 'clear')
    print("-------------")
    for i in range(3):
        print(f"| {board[i*3]} | {board[i*3+1]} | {board[i*3+2]} |")
        print("-------------")


def make_move(player, position):
    if board[position] == ' ':
        board[position] = player_markers[player]
        return True
    else:
        return False


def check_winner():
    # Check rows
    for i in range(0, 9, 3):
        if board[i] != ' ' and board[i] == board[i+1] == board[i+2]:
            return board[i]

    # Check columns
    for i in range(3):
        if board[i] != ' ' and board[i] == board[i+3] == board[i+6]:
            return board[i]

    # Check diagonals
    if board[0] != ' ' and board[0] == board[4] == board[8]:
        return board[0]
    if board[2] != ' ' and board[2] == board[4] == board[6]:
        return board[2]

    return None


def is_tie():
    return ' ' not in board


def play_game():
    current_player = 0
    while True:
        print_board()

        position = int(
            input(f"Player {player_markers[current_player]}, enter a position (1-9): ")) - 1

        if make_move(current_player, position):
            winner = check_winner()
            if winner:
                print_board()
                print(f"Player {winner} wins!")
                break
            elif is_tie():
                print_board()
                print("It's a tie!")
                break
            else:
                current_player = (current_player + 1) % 2
        else:
            print("Invalid move, try again.")


# Play the game
play_game()
