import numpy as np
import matplotlib.pyplot as plt

# Load data from the file
data_file = 'data7.dat'
data = np.loadtxt(data_file)

# Separate values of s and Y(s)
w_values, bode_mag_values = data[:, 0], data[:, 1]

# Plot the graph
plt.plot(w_values, bode_mag_values)
plt.xlabel('\u03c9')
plt.ylabel('|L(j\u03c9)|')
plt.legend()
plt.grid(True)
plt.show()

