#!/usr/bin/env python

from queue import PriorityQueue

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution: # Time complexity: O(N*log(k))
    def mergeKLists(self, lists):
        '''
        The time complexity of this solution is O(N*log(k)), where N is the
        total number of nodes in all the linked lists, and k is the number
        of linked lists. This is because in each iteration, we perform a
        constant-time operation to extract the minimum element from the
        min-heap and potentially add a new element to it. This solution is
        time-complexity optimized for merging k sorted linked lists.
        '''
        if not lists:
            return None
        # Create a priority queue (min-heap)
        min_heap = PriorityQueue()
        # Push the first node from each list into the min-heap
        for i, node in enumerate(lists):
            if node:
                min_heap.put((node.val, i, node))
        dummy_head = ListNode()
        current = dummy_head
        while not min_heap.empty():
            val, list_idx, node = min_heap.get()
            current.next = node
            current = current.next
            if node.next:
                min_heap.put((node.next.val, list_idx, node.next))
        return dummy_head.next

# Create a linked list from a list of values.
def createLinkedList(values):
    if not values:
        return None
    head = ListNode(values[0])
    current = head
    for val in values[1:]:
        current.next = ListNode(val)
        current = current.next
    return head

# Example usage:
solution = Solution()
lists = [createLinkedList([1, 4, 5]), createLinkedList([1, 3, 4]), createLinkedList([2, 6])]
merged_list = solution.mergeKLists(lists)
while merged_list:
    print(merged_list.val, end="")
    merged_list = merged_list.next
    if merged_list:
        print(" -> ", end="")