import numpy as np
import matplotlib.pyplot as plt

# Load data from the file
data_file = 'data5.dat'
data = np.loadtxt(data_file)

# Separate values of s and Y(s)
s_values, Y_values = data[:, 0], data[:, 1]

# Plot the graph
plt.plot(s_values, Y_values, label=r'$Y(s) = \frac{10s+1}{s(5s+1)}$')
plt.xlabel('s')
plt.ylabel('Y(s)')
plt.legend()
plt.grid(True)
plt.show()

