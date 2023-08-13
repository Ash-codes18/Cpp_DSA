#User function Template for python3

from typing import List
from collections import defaultdict
import heapq
class Solution:
    def shortestPath(self, n : int, m : int, edges : List[List[int]]) -> List[int]:
        adj = defaultdict(list)
        for i,j,k in edges:
            adj[i].append([j,k])
        vis = [float('inf')]*(n)
        vis[0] = 0
        heap = [0]
        while(heap):
            node = heapq.heappop(heap)
            for it in adj[node]:
                adjNode = it[0]
                wt = it[1]
                if vis[adjNode]>wt+vis[node]:
                    vis[adjNode] = wt+vis[node]
                    heapq.heappush(heap,adjNode)
        for i in range(len(vis)):
            if vis[i]==float('inf'):
                vis[i]=-1
        return vis



#{ 
 # Driver Code Starts

#Initial Template for Python 3

from typing import List




class IntMatrix:
    def __init__(self) -> None:
        pass
    def Input(self,n,m):
        matrix=[]
        #matrix input
        for _ in range(n):
            matrix.append([int(i) for i in input().strip().split()])
        return matrix
    def Print(self,arr):
        for i in arr:
            for j in i:
                print(j,end=" ")
            print()



class IntArray:
    def __init__(self) -> None:
        pass
    def Input(self,n):
        arr=[int(i) for i in input().strip().split()]#array input
        return arr
    def Print(self,arr):
        for i in arr:
            print(i,end=" ")
        print()


if __name__=="__main__":
    t = int(input())
    for _ in range(t):
        
        n,m=map(int,input().split())
        
        
        edges=IntMatrix().Input(m, 3)
        
        obj = Solution()
        res = obj.shortestPath(n, m, edges)
        
        IntArray().Print(res)
# } Driver Code Ends