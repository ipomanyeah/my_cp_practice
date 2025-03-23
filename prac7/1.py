import math

t = int(input())
a, b, c = list(map(int,input().split()))
if (math.lcm(a, b, c) > t):
  print(-1)
else:
  print(math.lcm(a, b, c))