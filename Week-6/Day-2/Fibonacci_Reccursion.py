n = int(input())
dp = {}

def fibo(n):
    if n in dp:
        return dp[n]
    
    if n == 1:
        dp[n] = 0
    
    elif n == 2:
        dp[n] = 1  
        
    else:
        dp[n] = fibo(n - 1) + fibo(n - 2)

    return dp[n]

ans = fibo(n)
print(ans)
        