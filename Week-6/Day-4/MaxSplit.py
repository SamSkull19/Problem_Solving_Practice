s = input("")

l = 0
r = 0
cnt = 0
x = ""
ans = []

for c in s:
    x += c

    if c == 'L':
        l += 1
    else:
        r += 1

    if l == r:
        cnt += 1
        ans.append(x)
        x = ""

print(cnt)
for i in ans:
    print(i)
