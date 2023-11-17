print((lambda n, fib=[0, 1]: fib + [fib.append(fib[-2] + fib[-1]) or fib[-1] for _ in range(8)])(10))
# here i have created a single line code to return fibonacci number.