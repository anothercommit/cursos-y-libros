function range(start, end) {
  if (end == undefined) return (end) => range(start, end);

  start = Number(start) || 0;
  end = Number(end) || 0;

  let arr = [];
  for (let i = start; i <= end; i++) arr.push(i);
  return arr;
}

console.log(range(3, 9));

var start6 = range(6);
console.log(start6(9));
