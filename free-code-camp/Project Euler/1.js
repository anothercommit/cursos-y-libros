function multiplesOf3Or5(number) {
  let sum = 0;

  for (let i = 1, n; (n = 3 * i) < number; ++i) sum += n;
  for (let i = 1, n; (n = 5 * i) < number; ++i) sum += n;

  return sum;
}

console.log(multiplesOf3Or5(10));
console.log(multiplesOf3Or5(49));
console.log(multiplesOf3Or5(1000));
console.log(multiplesOf3Or5(8456));
console.log(multiplesOf3Or5(19564));
