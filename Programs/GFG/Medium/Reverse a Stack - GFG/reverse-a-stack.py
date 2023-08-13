#User function Template for python3

from typing import List 
 
class Solution: 
    def helper(self,idx,n,St): 
        if idx>n: 
            return 
        St[idx],St[n]=St[n],St[idx] 
        self.helper(idx+1,n-1,St) 
    def reverse(self,St):  
        #code here 
        n=len(St) 
        self.helper(0,n-1,St) 
        return St



#{ 
 # Driver Code Starts

#Initial Template for Python 3

 
for _ in range(int(input())):
    N = int(input())
    St = list(map(int, input().split()))
    ob = Solution()
    ob.reverse(St)
    print(*St)
# } Driver Code Ends