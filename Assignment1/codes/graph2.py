import numpy as np
import matplotlib.pyplot as plt

# Define the function
def equation(x):
    return 2 * np.cos(2 * np.pi * (-0.008 * x))

# Generate x values
x_values = np.linspace(0, 450, 1000)  # Adjust the range and number of points as needed

# Calculate y values
y_values = equation(x_values)

plt.axhline(0, color='black', linewidth=1)
plt.axvline(0, color='black', linewidth=1)

# Add a blue dot at the center of the line
plt.plot(100, 0, 'ro', markersize=8, label='x_1')
plt.plot(150, 0, 'ro', markersize=8, label='x_2')

# Annotate points
plt.text(89, -0.2, '  $x_1$', verticalalignment='bottom', horizontalalignment='right', color='black')
plt.text(180, -0.2, '  $x_2$ ', verticalalignment='bottom', horizontalalignment='right', color='black')

plt.text(80, -0.2, '  (100, 0)', verticalalignment='top', horizontalalignment='left', color='black')
plt.text(152,0.3, ' (150, 0)', verticalalignment='top', horizontalalignment='left', color='black')

# Plot the graph
plt.plot(x_values, y_values)
plt.xlabel('x')
plt.ylabel('y')
plt.title('Graph of y = 2cos2π(10t - 0.008x +0.35)')
#plt.legend()
plt.grid(True)

# Calculate and display the distance
arrow_start = (100, -2)
arrow_end = (150, -2)
plt.annotate('', xy=arrow_start, xytext=arrow_end,
             arrowprops=dict(facecolor='purple', arrowstyle='<->'))
plt.text(145, -2.2, '  $50cm$ ', verticalalignment='bottom', horizontalalignment='right', color='purple')

plt.savefig('graph.png', bbox_inches='tight', pad_inches=0.2)
