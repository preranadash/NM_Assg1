X = 5
L = []

# Generate powers of 2 using a for loop and append method
for i in range(X + 1):
    L.append(2 ** i)

if 2 ** X in L:
    print('Found at index', L.index(2 ** X))
else:
    print(X, 'not found')

