import { useState } from 'react';

function Square({ value }) {
  return <button className="square">{value}</button>
}

export default function Board() {

  function handleClick() {
    setValue('X');
  }

  const [squares, setSquares] = useState(Array(9).fill(null));
  console.log(squares)
  return (
    <>
      <div className="board-row">
        {squares.forEach((square) => (
          <Square value={square} />
        ))}
      </div>
    </>
  )
}
