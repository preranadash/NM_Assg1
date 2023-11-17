L = [1, 2, 4, 8, 16, 32, 64]
X = 5

for i, item in enumerate(L):
    if 2 ** X == item:
        print('At index', i)
        break
else:
    print(X, 'not found')
