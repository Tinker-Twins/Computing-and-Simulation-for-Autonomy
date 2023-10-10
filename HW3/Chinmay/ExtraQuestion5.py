#!/usr/bin/env python

import numpy as np

'''
The time complexity of these operations depends on the size of the arrays. For 1D arrays
of length n, these operations are O(n). For 2D arrays of dimensions n x m, these operations
are O(n * m). This code is time-complexity optimized for performing element-wise operations
on NumPy arrays.
'''

# Create 1D arrays
a_1d = np.array([1, 2, 3, 4])
b_1d = np.array([5, 6, 7, 8])

# Element-wise operations for 1D arrays
addition_1d = a_1d + b_1d
subtraction_1d = a_1d - b_1d
multiplication_1d = a_1d * b_1d
division_1d = a_1d / b_1d

# Create 2D arrays
a_2d = np.array([[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12], [13, 14, 15, 16]])
b_2d = np.array([[17, 18, 19, 20], [21, 22, 23, 24], [25, 26, 27, 28], [29, 30, 31, 32]])

# Element-wise operations for 2D arrays
addition_2d = a_2d + b_2d
subtraction_2d = a_2d - b_2d
multiplication_2d = a_2d * b_2d
division_2d = a_2d / b_2d

# Print the results
print("1D Array Operations:")
print("Addition:", addition_1d)
print("Subtraction:", subtraction_1d)
print("Multiplication:", multiplication_1d)
print("Division:", division_1d)

print("\n2D Array Operations:")
print("Addition:\n", addition_2d)
print("Subtraction:\n", subtraction_2d)
print("Multiplication:\n", multiplication_2d)
print("Division:\n", division_2d)