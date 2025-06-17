s = list(map(str, input().split()))

x = ""
for i in s:
    x += i[: : -1] + " "

print(x.strip())
