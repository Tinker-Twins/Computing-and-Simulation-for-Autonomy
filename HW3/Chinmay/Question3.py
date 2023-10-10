#!/usr/bin/env python

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution: # Time complexity: O(max(N, M))
    '''
    The time complexity of the provided solution is O(max(N, M)), where N is the length of the first linked list l1,
    and M is the length of the second linked list l2. This is because the algorithm processes each digit in both linked
    lists once, and the number of digits processed is determined by the length of the longer of the two input linked lists.

    This time complexity is considered optimal for this problem because you must visit each digit in both numbers at least
    once to compute the sum. Therefore, this solution is time-complexity optimized and achieves the best possible time complexity
    for adding two numbers represented as linked lists.
    '''
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        carry = 0
        dummy_head = ListNode()
        current = dummy_head
        while l1 or l2:
            x = l1.val if l1 else 0
            y = l2.val if l2 else 0
            sum = x + y + carry
            carry = sum // 10
            current.next = ListNode(sum % 10)
            if l1:
                l1 = l1.next
            if l2:
                l2 = l2.next
            current = current.next
        if carry > 0:
            current.next = ListNode(carry)
        return dummy_head.next # Linked list representing the sum
    
    # Extract individual numbers the linked list
    def extractNumbers(self, result: ListNode) -> str:
        result_str = ""
        while result:
            result_str += str(result.val) + " -> "
            result = result.next
        return result_str.rstrip(" -> ")
    
    # Convert the linked list to an integer
    def extractInteger(self, head):
        num_str = ""
        current = head
        while current:
            num_str = str(current.val) + num_str # Add each digit to the beginning of the string
            current = current.next
        return int(num_str)

# Example usage:
# Create two linked lists l1 and l2 representing the numbers to be added and then call addTwoNumbers.
# For example, to add 342 and 465:
l1 = ListNode(2, ListNode(4, ListNode(3)))
l2 = ListNode(5, ListNode(6, ListNode(4)))
solution = Solution()
result = solution.addTwoNumbers(l1, l2)
resultNumbers = solution.extractNumbers(result)
resultInteger = solution.extractInteger(result)
print(resultNumbers)
print(resultInteger)