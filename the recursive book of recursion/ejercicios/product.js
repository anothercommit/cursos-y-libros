// ✅

function recursiva(arr) {
	if (arr.length === 0) return 1;
	else {
		let head = arr[0];
		let tail = arr.slice(1, arr.length);
		return head * recursiva(tail);
	}
}

function iterativa(arr) {
	let result = arr.length == 1 ? arr[0] : 0;

	for (let i = 0; i + 1 < arr.length; i++) {
		result += arr[i] * arr[i + 1];
	}

	return result;
}

console.log(iterativa([100, 2]));
