import numpy as np
import matplotlib.pyplot as plt

# Read data from the dat file
data = np.loadtxt("data_2.dat")

# Extract time and y(t) values
w_values = data[:, 0]
h_db1_values = data[:, 1]
h_db2_values = data[:, 2]
h_db3_values = data[:, 3]

# Plot the graph
plt.plot(w_values, h_db1_values, label = 'overdamped')
plt.plot(w_values, h_db2_values, label = 'cridamped')
plt.plot(w_values, h_db3_values, label = 'underdamped')

plt.axhline(0, color='black', linewidth=1.5)
plt.axvline(0, color='black', linewidth=1.5)
plt.xlabel('\u03A9(in s)')
plt.ylabel('$\\left|H_{{dB}}({omega})\\right|$')
plt.legend()
plt.grid(True)
plt.legend(['overdamped', 'cridamped', 'underdamped'])
plt.show()

