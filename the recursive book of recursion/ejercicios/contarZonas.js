// ✅

let image = [
	"...##########....................................".split(""),
	"...#........#....####..................##########".split(""),
	"...#........#....#..#...############...#........#".split(""),
	"...##########....#..#...#..........#...##.......#".split(""),
	".......#....#....####...#..........#....##......#".split(""),
	".......#....#....#......############.....##.....#".split(""),
	".......######....#........................##....#".split(""),
	".................####........####..........######".split(""),
];

function iterativa(img) {
	let contador = 0;
	for (let y = 0; y < img.length; y++) {
		for (let x = 0; x < img[y].length; x++) {
			if (img[y][x] === ".") {
				contador++;
				floodFill(img, x, y, "#");
			}
		}
	}
	return contador;
}

function floodFill(img, x, y, newChar) {
	let oldChar = img[y][x];
	let stack = [{ x: x, y: y }];

	while (stack.length > 0) {
		frame = stack.pop();
		x = frame.x;
		y = frame.y;

		if (y + 1 < img.length && img[y + 1][x] == oldChar) {
			stack.push({ x: x, y: y + 1 });
			img[y + 1][x] = newChar;
		}
		if (y - 1 >= 0 && img[y - 1][x] == oldChar) {
			stack.push({ x: x, y: y - 1 });
			img[y - 1][x] = newChar;
		}

		if (x + 1 < img[0].length && img[y][x + 1] == oldChar) {
			stack.push({ x: x + 1, y: y });
			img[y][x + 1] = newChar;
		}

		if (x - 1 >= 0 && img[y][x - 1] == oldChar) {
			stack.push({ x: x - 1, y: y });
			img[y][x - 1] = newChar;
		}
	}
}

console.log(contarZonas(image));
