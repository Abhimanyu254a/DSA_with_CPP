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
    // Function to create a new node and append it to the list
    void newnode(ListNode*& head, ListNode*& tail, int digit) {
        ListNode* newnode = new ListNode(digit); // Create a new node

        if (head == nullptr) { // If the list is empty, update head and tail
            head = tail = newnode;
        } else {
            tail->next = newnode; // Append to the end
            tail = newnode;       // Move the tail pointer
        }
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = nullptr; // Head of the result list
        ListNode* tail = nullptr; // Tail to track the end of the result list

        int carr = 0; // Initialize carry

        // Process both lists and the carry
        while (l1 != nullptr || l2 != nullptr || carr != 0) {
            int sum = carr;

            if (l1 != nullptr) { // Add value from l1 if available
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr) { // Add value from l2 if available
                sum += l2->val;
                l2 = l2->next;
            }

            carr = sum / 10; // Calculate carry for the next iteration
            int digit = sum % 10; // Current digit to store in the result

            newnode(ans, tail, digit); // Add the digit to the result list
        }

        return ans; // Return the head of the result list
    }
};
