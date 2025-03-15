class Solution:
    def tribonacci(n: int) -> int:
        if n == 0: return 0
        if n == 1 or n == 2: return 1

        pre = 0
        mid = 1
        cur = 1
        for i in range(3, n + 1):
            pre, mid, cur = mid, cur, pre + mid + cur
        # f = pre, cur = cur, pre + cur
        return cur
    
s = Solution
print(s.tribonacci(25))