class Solution(object):
    def numSquares(self, n):
        """
        :type n: int
        :rtype: int
        """
        dp=[i for i in range(n+1)];
        i=1
        for i in range(n+1):
            dp[i]=i
            j=1
            while i-j*j>=0:
                dp[i]=min(dp[i],dp[i-j*j]+1)
                j=j+1
        return dp[n]
