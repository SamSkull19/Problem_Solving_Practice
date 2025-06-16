a, b = list(map(int, input().split()))
s = input()

x = s.find('-')

if x != a:
    print('No')
else:
    p = s[:x]
    q = s[x + 1:]

    if not p.isdigit() or not q.isdigit():
        print('No')
    else:
        print('Yes')