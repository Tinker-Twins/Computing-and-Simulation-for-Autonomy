#!/usr/bin/env python

class Solution: # Time complexity: O(n)
    def isValid(self, s: str) -> bool:
        '''
        The time complexity of this solution is O(n), where n is the length of the
        input string s. This is because we iterate through the string once, and each
        character is processed exactly once. Therefore, this solution is time-complexity
        optimized.
        '''
        stack = []
        bracket_pairs = {')': '(', '}': '{', ']': '['}
        for char in s:
            if char in bracket_pairs.values():
                stack.append(char)
            elif char in bracket_pairs.keys():
                if not stack or stack.pop() != bracket_pairs[char]:
                    return False
            else:
                return False
        return len(stack) == 0

# Example usage:
solution = Solution()
s = "()[]{}"
result = solution.isValid(s)
print(result)