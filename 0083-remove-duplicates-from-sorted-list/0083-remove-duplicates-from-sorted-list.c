struct ListNode* deleteDuplicates(struct ListNode* head) {

    struct ListNode* current = head;

    while (current != NULL && current->next != NULL) {

        // If current node and next node have same value
        if (current->val == current->next->val) {

            // Skip the duplicate node
            current->next = current->next->next;
        }
        else {
            // Move to next node
            current = current->next;
        }
    }

    return head;
}