import matplotlib.pyplot as plt

# Read data from the file
with open('data.dat', 'r') as file:
    data = [line.split() for line in file.readlines()]

# Extract n_values and x_values2
n_values = [int(row[0]) for row in data]
x_values2 = [int(row[1]) for row in data]

# Plot the graph
plt.stem(n_values, x_values2, linefmt='b-', markerfmt='bo', basefmt='b')
plt.xlabel('$n$')
plt.ylabel('$x_2(n)$')
plt.title('Discrete Signal $x_2(n) = (9 - 5n)u(n)$')
plt.grid(True)
plt.show()
