#!/usr/bin/env python

class TreeNode(object):
    '''Definition of a binary tree node.'''
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

def solution(root): # Time complexity: O(n)
    '''
    The time complexity of this solution is O(n), where n is the number
    of nodes in the binary tree. This is optimal because it visits each
    node only once.
    '''
    if root is None:
        return 0
    left_depth = solution(root.left)
    right_depth = solution(root.right)
    return max(left_depth, right_depth) + 1

a15 = TreeNode(15)
a7 = TreeNode(7)
a20 = TreeNode(20)
a9 = TreeNode(9)
a3 = TreeNode(3)
a20.left = a15
a20.right = a7
a3.left = a9
a3.right = a20
print(solution(a3))