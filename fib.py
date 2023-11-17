# fibonacci.py

def generate_fibonacci(n):
    fib_sequence = [0, 1]

    while len(fib_sequence) < n:
        fib_sequence.append(fib_sequence[-1] + fib_sequence[-2])

    return fib_sequence[:n]

if __name__ == "__main__":
    n = 10
    result = generate_fibonacci(n)
    
    print(f"The first {n} Fibonacci numbers are: {result}")
