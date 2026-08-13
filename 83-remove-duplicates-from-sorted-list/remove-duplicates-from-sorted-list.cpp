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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head ;
        ListNode* temp = dummy->next;

        while(temp!=nullptr){
        if(temp->next!=nullptr&&temp->next->val==temp->val){
        ListNode* del=temp->next ;
        temp->next=temp->next->next;
        delete del;
    }else{
        temp=temp->next;
    }
}
return dummy->next;
    }
};