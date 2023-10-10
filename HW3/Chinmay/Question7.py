#!/usr/bin/env python

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution: # Time complexity: O(N)
    def hasPathSum(self, root: TreeNode, sum: int) -> bool:
        '''
        The time complexity of this solution is O(N), where N is the number of nodes
        in the binary tree. This is because we visit each node in the tree exactly
        once. Therefore, this solution is time-complexity optimized.
        '''
        if not root:
            return False
        # Check if it's a leaf node and if its value matches the remaining sum
        if not root.left and not root.right:
            return root.val == sum
        # Recursive check for left and right subtrees
        left_has_path_sum = self.hasPathSum(root.left, sum - root.val)
        right_has_path_sum = self.hasPathSum(root.right, sum - root.val)
        return left_has_path_sum or right_has_path_sum

# Example usage:
# Create a binary tree and then call hasPathSum.
# For example, to check if root-to-leaf path with sum 22 exists:
root = TreeNode(5)
root.left = TreeNode(4)
root.right = TreeNode(8)
root.left.left = TreeNode(11)
root.right.left = TreeNode(13)
root.right.right = TreeNode(4)
root.left.left.left = TreeNode(7)
root.left.left.right = TreeNode(2)
root.right.right.right = TreeNode(1)
solution = Solution()
result = solution.hasPathSum(root, 22)
print(result)