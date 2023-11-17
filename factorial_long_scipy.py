import time
import sympy

def factorial_sympy(n):
    return sympy.factorial(n)

def main():
    n = int(input("Enter a non-negative integer: "))
    
    if n < 0:
        print("Factorial is undefined for negative numbers.")
        return
    
    start_time = time.time()
    result = factorial_sympy(n)
    end_time = time.time()

    print(f"The factorial of {n} is:\n{result}")
    print(f"Time taken to compute factorial: {end_time - start_time} seconds")

if __name__ == "__main__":
    main()
