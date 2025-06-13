n = input()
x = n[::-1]

c = 0
for i in x:
    if i == '0':
        c += 1
    else:
        break

print(x[c : ])

if n == x[c:]:
    print("YES")
else:
    print("NO")