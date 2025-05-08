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

function reverseInOrder(node) {
	if (node["children"].length >= 2) reverseInOrder(node["children"][1]);
	console.log(node["data"]);
	if (node["children"].length >= 1) reverseInOrder(node["children"][0]);
	return;
}

reverseInOrder(root);
