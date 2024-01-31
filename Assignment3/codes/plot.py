import matplotlib.pyplot as plt

# Read data from the .dat file
file_path = 'data3.dat'
with open(file_path, 'r') as file:
    lines = file.readlines()

# Extract values from the file
x_values = []
y_values = []
for line in lines:
    if line.startswith('#') or not line.strip():
        continue
    n, expression_value = map(float, line.strip().split())
    x_values.append(int(n))
    y_values.append(expression_value)

# Plot the graph
plt.stem(x_values, y_values)
plt.title('Graph of the Expression (from .dat file)')
plt.xlabel('n')
plt.ylabel('Expression Value')
plt.grid(True)
plt.savefig('sumplot.png')
plt.show()

