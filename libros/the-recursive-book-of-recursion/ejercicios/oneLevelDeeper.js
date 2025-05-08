// ✅

let root = {
	data: "A",
	children: [
		{ data: "B", children: [{ data: "D", children: [] }] },
		{
			data: "C",
			children: [
				{
					data: "E",
					children: [
						{ data: "G", children: [] },
						{ data: "H", children: [] },
					],
				},
				{ data: "F", children: [] },
			],
		},
	],
};

function addLevel(node) {
	if (node.children.length == 0) {
		node.children.push({ data: "N", children: [] });
		return node;
	}

	for (let i = 0; i < node.children.length; i++)
		node.children[i] = addLevel(node.children[i]);

	return node;
}

function reverseInOrder(node) {
	if (node["children"].length >= 2) reverseInOrder(node["children"][1]);
	console.log(node["data"]);
	if (node["children"].length >= 1) reverseInOrder(node["children"][0]);
	return;
}

console.log("pre:");
reverseInOrder(root);
root = addLevel(root);
console.log("post:");
reverseInOrder(root);
