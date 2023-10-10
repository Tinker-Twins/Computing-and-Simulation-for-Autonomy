#!/usr/bin/env python

from matplotlib import pyplot as plt
import numpy as np
from scipy.fft import fft

# Define original signal
fre = 5 # Frequency in terms of Hertz
fre_samp = 50 # Sample rate
t = np.linspace(0, 2, 2 * fre_samp, endpoint=False)
a = np.sin(fre * 2 * np.pi * t)

# Plot settings
figure, axis = plt.subplots(2)

# Plot the original signal
axis[0].plot(t, a)
axis[0].set_xlabel('Time (s)')
axis[0].set_ylabel('Amplitude')
axis[0].set_title('Original Signal')

# Perform Discrete Fourier Transform (DFT) on original signal
A = fft(a)
N = len(a)
frequencies = np.fft.fftfreq(N, 1 / fre_samp)

# Plot the DFT Result
axis[1].stem(frequencies, np.abs(A) / N)
axis[1].set_xlabel('Frequency (Hz)')
axis[1].set_ylabel('Amplitude')
axis[1].set_title('DFT Result')

# Plot settings
plt.tight_layout()
plt.show()