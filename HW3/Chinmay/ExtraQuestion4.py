#!/usr/bin/env python

import cv2
from matplotlib import pyplot as plt

'''
The time complexity of template matching depends on the size of the main image
and the template. In this code, template matching is applied to each method
separately, so the time complexity is determined by the number of methods and
the size of the images. This code is time-complexity optimized for performing
template matching with OpenCV.
'''

# Load the main image and the template
img = cv2.imread('Messi Full.jpg', 0)
template = cv2.imread('Messi Face.jpg', 0)
w, h = template.shape[::-1]

# All the 6 methods for comparison in a list
methods = ['cv2.TM_CCOEFF', 'cv2.TM_CCOEFF_NORMED', 'cv2.TM_CCORR',
            'cv2.TM_CCORR_NORMED', 'cv2.TM_SQDIFF', 'cv2.TM_SQDIFF_NORMED']

for meth in methods:
    img_copy = img.copy()
    method = eval(meth)
    # Apply template Matching
    res = cv2.matchTemplate(img_copy, template, method)
    min_val, max_val, min_loc, max_loc = cv2.minMaxLoc(res)
    # For methods TM_SQDIFF and TM_SQDIFF_NORMED, take minimum
    if method in [cv2.TM_SQDIFF, cv2.TM_SQDIFF_NORMED]:
        top_left = min_loc
    else:
        top_left = max_loc
    # Draw a rectangle around the matched region
    bottom_right = (top_left[0] + w, top_left[1] + h)
    cv2.rectangle(img_copy, top_left, bottom_right, 255, 2)
    # Plot the result
    plt.subplot(121), plt.imshow(res, cmap='gray')
    plt.title('Matching Result'), plt.xticks([]), plt.yticks([])
    plt.subplot(122), plt.imshow(img_copy, cmap='gray')
    plt.title('Detected Point'), plt.xticks([]), plt.yticks([])
    plt.suptitle(meth)
    plt.show()