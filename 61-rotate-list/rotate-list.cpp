/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        if (head == NULL || head->next == NULL)
            return head;

        // Find length
        int count = 0;
        ListNode* temp = head;

        while (temp != NULL) {
            count++;
            temp = temp->next;
        }

        // Reduce unnecessary rotations
        k = k % count;

        if (k == 0)
            return head;

        // Find the last node
        ListNode* last = head;

        while (last->next != NULL) {
            last = last->next;
        }

        // Make the list circular
        last->next = head;

        // Move to the node before the new head
        ListNode* curr = head;

        for (int i = 0; i < count - k - 1; i++) {
            curr = curr->next;
        }

        // New head
        ListNode* newhead = curr->next;

        // Break the circle
        curr->next = NULL;

        return newhead;
    }
};