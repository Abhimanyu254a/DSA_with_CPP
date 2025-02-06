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
    ListNode* add(ListNode* &head, int val)
    {
        ListNode* temp = new ListNode();
        if(head == nullptr) temp = head;
       
        
        temp->val = val;
        head->next = temp;

        return temp;
    }

    ListNode* merge(ListNode* &head1,ListNode* &head2)
    {
        if(head1 == nullptr)
        return head2;

        ListNode* ans = new ListNode();
        ListNode* curr = ans;

        while(head1 != nullptr && head2 != nullptr)
        {
            if(head1->val > head2->val)
            {
                add(curr, head2->val);
                head2 = head2->next;
        
            }
            else
            {
                add(curr,head1->val);
                head1 = head1->next;
                
            }
            curr = curr->next;
        }
         while (head1 != nullptr) {
        curr = add(curr, head1->val);
        head1 = head1->next;
    }
    while (head2 != nullptr) {
        curr = add(curr, head2->val);
        head2 = head2->next;
    }


        

        return ans->next;
    }

    
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        if (lists.empty()) return nullptr;

        int n = lists.size();

        // Merge lists using Divide & Conquer
        while (n > 1) {
            int newN = (n + 1) / 2;  // Reduce number of lists each iteration
            for (int i = 0; i < n / 2; i++) {
                lists[i] = merge(lists[i], lists[i + newN]);
            }
            n = newN;
        }

        return lists[0]; 
        
    }
};// time Complexity is O(N log k) and space complexity is O(N + log k)