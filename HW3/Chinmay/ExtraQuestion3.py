#!/usr/bin/env python

import numpy as np

'''
The time complexity of this operation is O(N), where N is the total number
of elements in the array. It's a linear time operation because we examine
each element in the array only once to create the boolean mask and find the
indices. Therefore, this is a time-complexity optimized solution for this task.
'''

x = np.array([[0, 10, 20], [20, 30, 40]])
print("Original array:")
print(x)

# Find values greater than 10
values_gt_10 = x[x > 10]
print("Values greater than 10:")
print(values_gt_10)

# Find indices of values greater than 10 using np.where
indices_gt_10 = np.where(x > 10)[0]
print("Indices of values greater than 10:")
print(indices_gt_10)