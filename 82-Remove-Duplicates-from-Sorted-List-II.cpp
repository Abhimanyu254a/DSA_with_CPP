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
        ListNode* dNode = new ListNode(-1);
        ListNode* temp = head;
        ListNode* temp2 = dNode;
        while(temp != nullptr){
            ListNode* dupli = temp->next;
            int cnt = 1;
            while(dupli && dupli->val == temp->val){
                dupli = dupli->next;
                cnt++;
            }
            if(!dupli && cnt >= 2){
                temp2->next = nullptr;
                break;
            }
            if(cnt >= 2){
                temp = dupli;
                continue;
            }
            temp2->next = temp;
            temp = temp->next;
            temp2 = temp2->next;
        }
        
        return dNode->next;
    }
};