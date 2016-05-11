// given a linked list of numbers, divide the linked list in two parts, first all numbers of fibonacci series, second non fibonacci series 

struct Node {
	int val;
	Node* next;
	Node(int v) : next(NULL) {
		val = v;
	}
};

bool isFibonacci(int n) {
	int k, r;

	k = n * n * 5 - 4;
	r = sqrt((double)k);
	if (r * r == k) return true;

	k = n * n * 5 + 4;
	r = sqrt((double)k);
	if (r * r == k) return true;

	return false;
}

void divideLinkedList(Node* node, Node** fRoot, Node** oRoot) {
	Node* fNode = NULL;
	Node* oNode = NULL;

	while (node) {
		if (isFibonacci(node->val) == true) {
			if (fNode == NULL) {
				*fRoot = node;
				fNode = *fRoot;
			} else {
				fNode->next = node;
				fNode = fNode->next;
			}
		} else {
			if (oNode == NULL) {
				*oRoot = node;
				oNode = *oRoot;
			} else {
				oNode->next = node;
				oNode = oNode->next;
			}
		}
		node = node->next;
	}
	if (fNode) fNode->next = NULL;
	if (oNode) oNode->next = NULL;
}
