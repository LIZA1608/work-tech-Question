/*https://workat.tech/problem-solving/practice/reverse-linked-list-ii*/

ListNode* reverse(ListNode *head) {
	ListNode* prevNode = NULL, *currentNode = head;
	while (currentNode != NULL) {
		ListNode* nextNode = currentNode->next;
		currentNode->next = prevNode;
		prevNode = currentNode;
		currentNode = nextNode;
	}
	return prevNode;
}
ListNode* reverseLinkedListRange(ListNode* head, int left, int right) {
	ListNode* currentNode = head;
	ListNode* startNode;
	ListNode* lastNode;
	int i = 1;
	while (currentNode != NULL) {
		if (i > right) {
			break;
		}
		if (i < left) {
			startNode = currentNode;
		}
		if (i == right) {
			lastNode = currentNode;
		}
		currentNode = currentNode->next;
		i++;
	}
	lastNode->next = NULL;
	if (left == 1) {
		lastNode = head;
		head = reverse(head);
	} else {
		lastNode = startNode->next;
		startNode->next = reverse(startNode->next);
	}
	lastNode->next = currentNode;
	return head;
}
