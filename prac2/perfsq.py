n = int(input())

dp = [n] * (n + 1)
dp[0] = 0

for tg in range(1, n + 1):
  for s in range(1, tg + 1):
    sq = s * s;
    if tg - sq < 0:
      break
    dp[tg] = min(dp[tg], dp[tg] - sq + 1)

print(dp[n])

