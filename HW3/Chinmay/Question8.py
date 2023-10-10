#!/usr/bin/env python

class Solution: # Time complexity: O(n)
    def isAnagram(self, s: str, t: str) -> bool:
        '''
        The time complexity of this solution is O(n), where n is the length
        of the input strings s and t. This is because we iterate through both
        strings once to count the character frequencies, and the dictionary
        comparison is also done in O(n) time. Therefore, this solution is
        time-complexity optimized.
        '''
        # Check if lengths of string s and t match
        if len(s) != len(t):
            return False
        char_count_s = {}
        char_count_t = {}
        # Count character frequencies in string s
        for char in s:
            char_count_s[char] = char_count_s.get(char, 0) + 1
        # Count character frequencies in string t
        for char in t:
            char_count_t[char] = char_count_t.get(char, 0) + 1
        return char_count_s == char_count_t

# Example usage:
solution = Solution()
print(solution.isAnagram("anagram", "nagaram"))  # Should print True
print(solution.isAnagram("rat", "car"))          # Should print False