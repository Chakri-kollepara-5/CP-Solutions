class Solution:
    def minCost(self, n: int, i: int, d: int, c: int) -> int:
        # code here
        def solve(n):
            if n==0:
                return 0
            if n==1:
                return i
            ans=i*n
            if n%2==0:
                res=solve(n//2)+c
                ans=min(ans,res)
            else:
                down = i + solve(n-1)
                up = d + solve(n+1)
                ans=min(ans,min(down,up))
            return ans
        return solve(n)