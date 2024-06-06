// ✅

function recursiva(arr) {
	if (arr.length === 1) return arr[0];
	return "" + arr[0] + recursiva(arr.slice(1));
}

function iterativa(arr) {
	let result = "";
	for (element of arr) result += element;
	return result;
}

console.log(recursiva([1, 2, 3]));
