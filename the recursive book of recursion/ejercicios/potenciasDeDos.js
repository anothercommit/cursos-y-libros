// ✅ tuve que escribir otra func por separado pero bueno

function iterativa(n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	n--;

	let sum = 0;
	let opStack = [];

	while (n > 1) {
		let num = n;
		while (num > 1) {
			if (num % 2 === 0) {
				opStack.push("square");
				num = num / 2;
			} else {
				num -= 1;
				opStack.push("multiply");
			}
		}

		let result = 2;
		while (opStack.length > 0) {
			let op = opStack.pop();

			if (op === "multiply") result *= 2;
			else if (op === "square") result *= result;
		}

		sum += result;
		n--;
	}
	return (sum += 3);
}

function recursiva(n) {
	if (n === 0) return 1;
	else if (n === 1) return 2;

	if (n % 2 === 0) {
		result = recursiva(n / 2);
		return result * result;
	} else if (n % 2 === 1) {
		result = recursiva(Math.floor(n / 2));
		return result * result * 2;
	}
}
