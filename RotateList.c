struct ListNode *rotateRight(struct ListNode *head, int k) {
    if (!head || k == 0) return head;

	struct ListNode* lastNode = head;
	int n = 1;
	while (lastNode->next)
	{
		lastNode = lastNode->next;
		n++;
	}

	k = k%n;

	if (k == 0) return head;
	k = n - k;

	lastNode->next = head;
	struct ListNode *newHead = head;

	for (int i = 0; i < k - 1; i++){
    
		newHead = newHead->next;
    }
		
	head = newHead->next;
	newHead->next = NULL;
	return head;
}
