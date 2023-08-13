#User function Template for python3

class Solution:
    def binarySearch(self, tails, target):
        left, right = 0, len(tails) - 1
        while left <= right:
            mid = left + (right - left) // 2
            if tails[mid] == target:
                return mid
            elif tails[mid] < target:
                left = mid + 1
            else:
                right = mid - 1
        return left

    def longestSubsequence(self, a, n):
        tails = [a[0]]
        for i in range(1, n):
            if a[i] > tails[-1]:
                tails.append(a[i])
            else:
                idx = self.binarySearch(tails, a[i])
                tails[idx] = a[i]
        return len(tails)






#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    for _ in range(int(input())):
        n = int(input())
        a = [ int(x) for x in input().split() ]
        ob=Solution()
        print(ob.longestSubsequence(a,n))
# } Driver Code Ends