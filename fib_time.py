# fibonacci_timing.py

import timeit

def generate_fibonacci(n):
    fib_sequence = [0, 1]

    while len(fib_sequence) < n:
        fib_sequence.append(fib_sequence[-1] + fib_sequence[-2])

    return fib_sequence[:n]

if __name__ == "__main__":
    n = 100

    # Measure the time it takes to generate 100 Fibonacci numbers
    time_taken = timeit.timeit(lambda: generate_fibonacci(n), number=1000)

    print(f"Time taken to generate {n} Fibonacci numbers: {time_taken:.6f} seconds")
