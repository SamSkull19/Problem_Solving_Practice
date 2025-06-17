n, q = list(map(int, input().split()))
a = list(map(int, input().split()))

pref = [0] * (n + 1)
for i in range(1, n + 1):
    pref[i] = pref[i - 1] + a[i - 1]

for _ in range(q):
    l, r = list(map(int, input().split()))
    ans = pref[r] - pref[l - 1]
    print(ans)





