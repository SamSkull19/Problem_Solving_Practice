a, b = map(int, input().split())
ans = []

def luckyNum(x):
    for ch in str(x):
        if ch != '4' and ch != '7':
            return False
    return True

for i in range(a, b + 1):
    if luckyNum(i):
        ans.append(i);

if not ans:
    print('-1')
else:
    s = " ".join(map(str, ans))
    print(s)