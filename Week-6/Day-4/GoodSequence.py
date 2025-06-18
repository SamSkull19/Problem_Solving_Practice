n = input()
a = list(map(int, input().split()))
freq = {}

for i in a:
    freq[i] = freq.get(i, 0) + 1

x = 0
for key in freq:
    cnt = freq[key]
    
    if cnt < key:
        x += cnt
    else:
        x += cnt - key

print(x)
