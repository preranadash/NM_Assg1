X = 5
target_value = 2 ** X
L = []

# Generate powers of 2 using a for loop and append method
for i in range(X + 1):
    L.append(2 ** i)

if target_value in L:
    print('Found at index', L.index(target_value))
else:
    print(X, 'not found')
