import numpy as np
import matplotlib.pyplot as plt

# Read data from the dat file
data = np.loadtxt("data6.dat")

# Extract time and y values
t_values = data[:, 0]
y_values = data[:, 1]

# Plot the graph
plt.plot(t_values, y_values, label=r'$y(t) = (1 - 2e^{-at})u(t)$')
plt.axhline(0, color='black', linewidth=1.5)
plt.axvline(0, color='black', linewidth=1.5)
plt.xlabel('t(in \u00B5 s)')
plt.ylabel('y(t)')
plt.legend()
plt.grid(True)
plt.show()

