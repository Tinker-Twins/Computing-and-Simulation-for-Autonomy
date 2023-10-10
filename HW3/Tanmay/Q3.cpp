#include <iostream>

using namespace std; // Include the "std" namespace

// Definition for singly-linked list
struct ListNode {
    int val; // Value
    ListNode* next; // Link
    ListNode(int x) : val(x), next(NULL) {} // Constructor
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);  // Create a dummy node
        ListNode* current = dummy;  // Initialize a current pointer to the dummy node
        int carry = 0;  // Initialize carry to 0 to track any carryover

        while (l1 || l2) {  // Continue loop until both input linked lists are processed
            int x = (l1) ? l1->val : 0;  // Get value of current node in l1, or 0 if l1 is nullptr
            int y = (l2) ? l2->val : 0;  // Get value of current node in l2, or 0 if l2 is nullptr

            int sum = x + y + carry;  // Calculate the sum of digits from l1, l2, and any carry
            carry = sum / 10;  // Update carry for the next iteration
            current->next = new ListNode(sum % 10);  // Create a new node for units place
            current = current->next;  // Move the current pointer to the newly created node

            if (l1) l1 = l1->next;  // Move to the next node in l1 if it exists
            if (l2) l2 = l2->next;  // Move to the next node in l2 if it exists
        }

        if (carry > 0) { // If there is a carry after the loop
            current->next = new ListNode(carry);  // Create a new node for carry
        }

        return dummy->next;  // Return the next node of the dummy, which is the actual result
    }
};

// Function to print a linked list for testing
void printList(ListNode* head) {
    while (head) {
        cout << head->val << " -> "; // Print current value
        head = head->next; // Go to next link
    }
    cout << "nullptr" << endl; // Print `nullptr` at the end
}

int main() {
    // Given linked lists
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    // Add the two numbers
    Solution solution;
    ListNode* result = solution.addTwoNumbers(l1, l2);

    // Print the result
    printList(result);

    return 0;
}
