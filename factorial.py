import ctypes

# Load the shared library
factorial_lib = ctypes.CDLL('./factorial.so')

# Define the argument and return types
factorial_lib.factorial.argtypes = [ctypes.c_int64]
factorial_lib.factorial.restype = ctypes.c_int64

# Python function using the C function
def factorial_python(n):
    return factorial_lib.factorial(n)

# Example usage
n = 5
result = factorial_python(n)
print(f"The factorial of {n} is: {result}")
