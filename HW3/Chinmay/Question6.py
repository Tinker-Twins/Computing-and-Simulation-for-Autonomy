#!/usr/bin/env python

import cv2
import matplotlib.pyplot as plt

'''
The time complexity of the bilateral filter implementation in OpenCV is typically
considered to be O(N), where N is the number of pixels in the image. However, the
actual time complexity can vary depending on the hardware and specific optimization
techniques used by OpenCV. This code provides a time-complexity optimized solution
for applying the bilateral filter and visualizing the images.
'''

# Read the image.
img = cv2.imread('OriginalImage.jpg')

# Apply bilateral filter.
bilateral = cv2.bilateralFilter(img, d=15, sigmaColor=75, sigmaSpace=75)

# Save the output.
cv2.imwrite('FilteredImage.jpg', bilateral)

# Visualize the original and filtered images.
plt.subplot(121), plt.imshow(cv2.cvtColor(img, cv2.COLOR_BGR2RGB)), plt.title('Original Image')
plt.subplot(122), plt.imshow(cv2.cvtColor(bilateral, cv2.COLOR_BGR2RGB)), plt.title('Bilateral Filtered Image')
plt.show()