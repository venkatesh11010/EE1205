import matplotlib.pyplot as plt
import numpy as np

# Given values of first AP
a = 3  # first term
d = 4  # common difference
n = 15  # number of terms

# Generate the arithmetic progression using NumPy
ap_sequence = np.arange(a, a + n * d, d)

# Calculate the sum of the first 15 terms using np.sum
sum_an1 = np.sum(ap_sequence)

# Given values of Second AP
a = 9  # first term
d = -5  # common difference
n = 15  # number of terms

# Generate the arithmetic progression using NumPy
ap_sequence = np.arange(a, a + n * d, d)

# Calculate the sum of the first 15 terms using np.sum
sum_an2 = np.sum(ap_sequence)

# Function to calculate x(n) = (3 + 4n)u(n)
def x_n1(n):
    return (3 + 4 * n) * (n >= 0)

# Function to calculate x(n) = (9 - 5n)u(n)
def x_n2(n):
    return (9 - 5 * n) * (n >= 0)

# Generate values for n
n_values = np.arange(-10, 11, 1)

# Calculate corresponding values for both x(n) signals
x_values1 = x_n1(n_values)
x_values2 = x_n2(n_values)

# Plot the first signal
plt.stem(n_values, x_values1, linefmt='b-', markerfmt='bo', basefmt='b')
plt.xlabel('$n$')
plt.ylabel('$x_1(n)$')
plt.title('Discrete Signal $x_1(n) = (3 + 4n)u(n)$')
plt.grid(True)
plt.savefig('signal_x1.png')
plt.clf()  # Clear the figure for the next plot

# Plot the second signal
plt.stem(n_values, x_values2, linefmt='b-', markerfmt='bo', basefmt='b')
plt.xlabel('$n$')
plt.ylabel('$x_2(n)$')
plt.title('Discrete Signal $x_2(n) = (9 - 5n)u(n)$')
plt.grid(True)
plt.savefig('signal_x2.png')
plt.clf()  # Clear the figure
