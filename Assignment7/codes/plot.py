import numpy as np
import matplotlib.pyplot as plt

# Load data from the file
data_file = 'data7.dat'
data = np.loadtxt(data_file)

# Separate values of s and Y(s)
w_values, bmvalues1, bmvalues2, bmvalues3, bmvalues4, bmvalues5, bmvalues6, bmvalues7= data[:, 0], data[:, 1], data[:, 2], data[:, 3], data[:, 4], data[:, 5], data[:, 6],data[:, 7]

#Plot the graph
plt.plot(w_values, bmvalues1)
plt.plot(w_values, bmvalues2)
plt.plot(w_values, bmvalues3)
plt.plot(w_values, bmvalues4)
plt.plot(w_values, bmvalues5)
plt.plot(w_values, bmvalues6)
plt.plot(w_values, bmvalues7)

plt.axhline(0, color='black', linewidth=1.5)
plt.axvline(0, color='black', linewidth=1.5)
tick_positions = [i for i in range(1, 4)]  # Adjust the range as needed
tick_labels = ['$10^{}$'.format(i) for i in range(1, 4)]

plt.xticks(tick_positions, tick_labels)
plt.xlabel('\u03c9')
plt.ylabel('|L(j\u03c9)|')
plt.legend()
plt.grid(True)
plt.show()

