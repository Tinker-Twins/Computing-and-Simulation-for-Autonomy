#!/usr/bin/env python

class Solution: # Time complexity: O(n)
    def lengthOfLongestSubstring(self, s: str) -> int:
        '''
        The time complexity of this solution is O(n), where n is the length of the
        input string s. This is because we iterate through the string once, and each
        character is processed exactly once. Therefore, this solution is time-complexity
        optimized.
        '''
        char_set = set()
        max_length = 0
        left = 0
        for right in range(len(s)):
            while s[right] in char_set:
                char_set.remove(s[left])
                left += 1
            char_set.add(s[right])
            max_length = max(max_length, right - left + 1)
        return max_length

# Example usage:
solution = Solution()
s = "abcabcbb"
result = solution.lengthOfLongestSubstring(s)
print(result)