n = input()
a = list(map(int, input().split()))

cnt = 0
while True:
    if all(x % 2 == 0 for x in a):
        a = [x // 2 for x in a]
        cnt += 1
    else:
        break
    
print(cnt)