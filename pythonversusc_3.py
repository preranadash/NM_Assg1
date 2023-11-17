from scipy.special import factorial

# Input from the user
n = int(input("Enter a non-negative integer: "))

# Check if the input is non-negative
if n < 0:
    print("Please enter a non-negative integer.")
else:
    # Call the factorial function from SciPy
    result = factorial(n)
    print(f"Factorial of {n} = {result}")
