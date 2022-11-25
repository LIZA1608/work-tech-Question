/*https://workat.tech/problem-solving/practice/middle-element-linked-list*/

int getMiddleElementOfLinkedList (ListNode* list) {
    ListNode* slow = list;
	ListNode* fast = list;
	while (true) {
		if (fast->next == NULL || fast->next->next == NULL) {
			break;
		}
		slow = slow->next;
		fast = fast->next->next;
	}
	return (slow->data);
}
