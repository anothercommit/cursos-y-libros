// ✅

function recursiva(n) {
	if (n == 1) return 1;
	return n + recursiva(n - 1);
}

function iterativa(n) {
	let result = 0;
	for (let i = 0; i <= n; i++) result += i;
	return result;
}
