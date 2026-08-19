class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if (head == NULL)
            return head;

        // Find length
        int length = 0;
        ListNode* temp = head;

        while (temp != NULL) {
            length++;
            temp = temp->next;
        }

        // If we have to remove the head
        if (length - n - 1 < 0) {
            ListNode* newnode = head;
            head = head->next;
            delete newnode;
            return head;
        }

        // Move curr to the node before the node to remove
        ListNode* curr = head;

        for (int i = 0; i < length - n - 1; i++) {
            curr = curr->next;
        }

        // Remove the node
        ListNode* remove = curr->next;
        curr->next = curr->next->next;
        delete remove;

        return head;
    }
};