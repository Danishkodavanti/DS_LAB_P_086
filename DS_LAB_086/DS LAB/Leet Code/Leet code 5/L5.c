bool hasCycle(struct ListNode *head) {

 if (head == NULL || head->next == NULL) {
 return false;
 }
 struct ListNode *slow = head;
 struct ListNode *fast = head;
 while (fast != NULL && fast->next != NULL) {
 slow = slow->next;
 fast = fast->next->next;
 if (slow == fast) {
 return true;
 }
 }
 return false;
}
