// ✅

function iterativa(n) {
	let resultado = 0;
	for (let i = 1; i <= n; i++) resultado += i;
	return resultado;
}

function recursiva(n, i = 1, resultado = 0) {
	if (i > n) return resultado;
	else return recursiva(n, i + 1, (resultado += i));
}
