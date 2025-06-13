n = int(input())
a = list(map(int, input().split()))

mx = a.index(max(a))
mn = a.index(min(a))

a[mx], a[mn] = a[mn], a[mx]
print(" ".join(map(str, a)))