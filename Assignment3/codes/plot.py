import matplotlib.pyplot as plt
import numpy as np

data = np.loadtxt('data3.dat')

x_values, y_values = data[:, 0], data[:, 1]

# Plot the graph
plt.stem(x_values, y_values)
plt.xlabel('n')
plt.ylabel('y(n-1)')
plt.grid(True)
plt.savefig('sumplot.png')
plt.show()

