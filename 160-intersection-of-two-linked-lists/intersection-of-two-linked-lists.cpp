/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {

        int lenA = 0, lenB = 0;

        ListNode* temp = headA;
        while (temp != NULL) {
            lenA++;
            temp = temp->next;
        }

        temp = headB;
        while (temp != NULL) {
            lenB++;
            temp = temp->next;
        }

        // Move the longer list's pointer ahead
        ListNode* pA = headA;
        ListNode* pB = headB;

        if (lenA > lenB) {
            int diff = lenA - lenB;

            while (diff--) {
                pA = pA->next;
            }
        }
        else {
            int diff = lenB - lenA;

            while (diff--) {
                pB = pB->next;
            }
        }

        // Move both pointers together
        while (pA != pB) {
            pA = pA->next;
            pB = pB->next;
        }

        return pA;
    }
};