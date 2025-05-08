// ✅

let im = [
	"..########################...........".split(""),
	"..#......................#...#####...".split(""),
	"..#..........########....#####...#...".split(""),
	"..#..........#......#............#...".split(""),
	"..#..........########.........####...".split(""),
	"..######......................#......".split(""),
	".......#..#####.....###########......".split(""),
	".......####...#######................".split(""),
];

let HEIGHT = im.length;
let WIDTH = im[0].length;

function recursiva(image, x, y, newChar, oldChar) {
	if (oldChar === undefined) oldChar = image[y][x];
	if (oldChar == newChar || image[y][x] != oldChar) return;

	image[y][x] = newChar;

	if (y + 1 < HEIGHT && image[y + 1][x] == oldChar)
		recursiva(image, x, y + 1, newChar, oldChar);

	if (y - 1 >= 0 && image[y - 1][x] == oldChar)
		recursiva(image, x, y - 1, newChar, oldChar);

	if (x + 1 < WIDTH && image[y][x + 1] == oldChar)
		recursiva(image, x + 1, y, newChar, oldChar);

	if (x - 1 >= 0 && image[y][x - 1] == oldChar)
		recursiva(image, x - 1, y, newChar, oldChar);

	return;
}

function iterativa(image, x, y, newChar) {
	let oldChar = image[y][x];
	let stack = [{ x: x, y: y }];

	while (stack.length > 0) {
		frame = stack.pop();
		x = frame.x;
		y = frame.y;

		if (y + 1 < HEIGHT && image[y + 1][x] == oldChar) {
			stack.push({ x: x, y: y + 1 });
			image[y + 1][x] = newChar;
		}
		if (y - 1 >= 0 && image[y - 1][x] == oldChar) {
			stack.push({ x: x, y: y - 1 });
			image[y - 1][x] = newChar;
		}

		if (x + 1 < WIDTH && image[y][x + 1] == oldChar) {
			stack.push({ x: x + 1, y: y });
			image[y][x + 1] = newChar;
		}

		if (x - 1 >= 0 && image[y][x - 1] == oldChar) {
			stack.push({ x: x - 1, y: y });
			image[y][x - 1] = newChar;
		}
	}
}

function mostrar(image) {
	for (let y = 0; y < HEIGHT; y++) {
		console.log(image[y].join(""));
	}
}

console.log("pre");
mostrar(im);
iterativa(im, 4, 3, "o");
console.log("post");
mostrar(im);
