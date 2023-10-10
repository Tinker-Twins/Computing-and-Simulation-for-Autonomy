#!/usr/bin/env python

class Solution: # Time complexity: O(n)
    def maxSubArray(self, nums):
        '''
        The time complexity of this solution is O(n), where n is the length of
        the input array nums. This is because we iterate through the array once,
        and at each step, we perform constant-time operations. Kadane's algorithm
        is a well-known and time-complexity optimized solution for this problem.
        '''
        max_sum = nums[0]
        current_sum = nums[0]
        for num in nums[1:]:
            current_sum = max(num, current_sum + num)
            max_sum = max(max_sum, current_sum)
        return max_sum

# Example usage:
solution = Solution()
nums = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
result = solution.maxSubArray(nums)
print(result) # This should print 6 for the provided example.