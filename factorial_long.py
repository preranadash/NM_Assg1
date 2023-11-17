import mpmath
import time

# Function to calculate factorial using mpmath
def factorial_long_python(n):
    return mpmath.factorial(n)

# Example usage with timing
n = 1000  # Replace with your desired large number
start_time = time.time()
result = factorial_long_python(n)
end_time = time.time()

print(f"The factorial of {n} is:\n{result}")
print(f"Time taken to compute factorial: {end_time - start_time} seconds")
