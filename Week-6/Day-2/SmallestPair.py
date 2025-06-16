t = int(input())

while t > 0:
    n = int(input())
    a = list(map(int, input().split()))

    sum = float('inf')
    for i in range(n):
        for j in range(i + 1, n):
            s = a[i] + a[j] + j - i
            sum = min(sum, s)

    print(sum)
    t -= 1
