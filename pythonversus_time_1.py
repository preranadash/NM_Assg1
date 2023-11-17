import time
from scipy.special import factorial

# Input from the user
num = int(input("Enter a non-negative integer: "))

# Check if the input is non-negative
if num < 0:
    print("Please enter a non-negative integer.")
else:
    # Measure the time taken
    start_time = time.time()
    fact = factorial(num)
    end_time = time.time()

    # Calculate elapsed time in seconds
    elapsed_time = end_time - start_time

    print(f"The factorial of {num} is {fact}")
    print(f"Time taken: {elapsed_time} seconds")
