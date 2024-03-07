import numpy as np
import matplotlib.pyplot as plt

# Read data from the dat file
data = np.loadtxt("data_2.dat")

# Extract frequency and H_db values
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
plt.xlabel('log\u03C9')
plt.ylabel('$20log|V_0/V_i|$')
plt.legend()
plt.grid(True)
plt.legend(['overdamped', 'cridamped', 'underdamped'])
plt.show()
plt.clf()

# Extract frequency and H_db values
w_values = data[:, 0]
h_db1_values = data[:, 4]
h_db2_values = data[:, 5]
h_db3_values = data[:, 6]

# Plot the graph
plt.plot(w_values, h_db1_values, label = 'overdamped')
plt.plot(w_values, h_db2_values, label = 'cridamped')
plt.plot(w_values, h_db3_values, label = 'underdamped')

plt.axhline(0, color='black', linewidth=1.5)
plt.axvline(0, color='black', linewidth=1.5)
plt.xlabel('\u03C9')
plt.ylabel('$\u2220 H(s)$')
plt.legend()
plt.grid(True)
plt.legend(['overdamped', 'cridamped', 'underdamped'])
plt.show()
plt.clf()


