#!/usr/bin/env python

def solution(nums, target): # Time complexity: O(n)
    '''
    The time complexity of this solution is O(n), where n is the number
    of elements in the array. This is optimal because we iterate through
    the array just once and perform constant-time operations for each
    element.
    '''
    num_dict = {}  # Create a dictionary to store elements and their indices
    for i, num in enumerate(nums):
        complement = target - num
        if complement in num_dict:
            return nums[num_dict[complement]], nums[i] # If solution is found, return the solution
        num_dict[num] = i
    return None # If no solution is found, return None

numbers = [0, 21, 78, 19, 90, 13]
print(solution(numbers, 21))
print(solution(numbers, 25))