class Solution {
public:
    ListNode* reverse(ListNode* head) {
        if (!head || !head->next) return head;

        ListNode* last = reverse(head->next);
        head->next->next = head;
        head->next = nullptr;

        return last;
    }

    void reorderList(ListNode* head) {
        if (!head || !head->next || !head->next->next) return;

        ListNode* slow = head;
        ListNode* fast = head;

        // Find middle of the list
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse second half of the list
        ListNode* revHead = reverse(slow);
        ListNode* cur = head;

        // Merge two halves
        while (cur && revHead && revHead->next) {
            ListNode* tempCur = cur->next;
            ListNode* tempRev = revHead->next;

            cur->next = revHead;
            revHead->next = tempCur;

            cur = tempCur;
            revHead = tempRev;
        }
    }
};
