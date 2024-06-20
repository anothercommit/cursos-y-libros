import { useState } from 'react';

function Square({ value, onSquareClick }) {
    return (
        <button className="square" onClick={onSquareClick}>
            {value}
        </button>
    );
}

export default function Board() {
    const [squares, setSquares] = useState(Array(9).fill(null));

    function handleClick(i) {
        const nextSquares = squares.slice();
        nextSquares[i] = 'X';
        setSquares(nextSquares);
    }

    return (
        <>
            {[0, 1, 2].map(n => (
                <div className="board-row">
                    <Square key={n} value={squares[n]} onSquareClick={() => handleClick(n)} />
                    <Square key={n + 3} value={squares[n + 3]} onSquareClick={() => handleClick(n + 3)} />
                    <Square key={n + 6} value={squares[n + 6]} onSquareClick={() => handleClick(n + 6)} />
                </div>
            ))}
        </>
    );
}

