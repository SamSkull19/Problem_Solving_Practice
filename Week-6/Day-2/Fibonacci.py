n = int(input())
a = 0
b = 1

if n == 1:
    print(a)

elif n == 2:
    print(b)

else:
    for i in range(3, n + 1):
        s = a + b
        a = b
        b = s
    print(b)