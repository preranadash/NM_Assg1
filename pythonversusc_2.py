def factorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial(n - 1)

# Input from the user
n = int(input("Enter a non-negative integer: "))

# Check if the input is non-negative
if n < 0:
    print("Please enter a non-negative integer.")
else:
    # Calculate and print the factorial
    result = factorial(n)
    print(f"Factorial of {n} = {result}")
