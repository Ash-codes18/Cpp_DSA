#include<bits/stdc++.h> 
using namespace std; 
int setBit(int arr[],int n)
{
  int i,count=0;
  for(i=0;i<n;i++)
    if(arr[i]==1) count++;
  return count;
}
int main()
{
  int n,m,i;
  cin>>n>>m;
  int b[2][n];
  for(i=0;i<n;i++)
  {
    b[0][i]=0;
    b[1][i]=0;
  }
  int set1,set2,iter;
  string op;
  for(iter=0;iter<m;iter++)
  {
    cin>>op;
    cin>>set1>>set2;
    if(op=="AND")
    {
      for(i=0;i<n;i++)
      {
        b[set2-1][i]=b[set1-1][i]&b[set2-1][i];
      }
      cout<<setBit(b[0],n)<<" "<<setBit(b[1],n)<<endl;
    }
    else if(op=="OR") 
    {
      for(i=0;i<n;i++)
      {
        b[set1-1][i]=b[set1-1][i]|b[set2-1][i];
      }
      cout<<setBit(b[0],n)<<" "<<setBit(b[1],n)<<endl;
    }
    else if(op=="XOR")  
    {
      for(i=0;i<n;i++)
      {
        b[set2-1][i]=b[set1-1][i]^b[set2-1][i];
      }
      cout<<setBit(b[0],n)<<" "<<setBit(b[1],n)<<endl;
    }
    else if(op=="FLIP")
    {
      b[set1-1][set2-1]=!b[set1-1][set2-1];
      cout<<setBit(b[0],n)<<" "<<setBit(b[1],n)<<endl;
    }
    else if(op=="SET")
    {
      b[set1-1][set2-1]=1;
      cout<<setBit(b[0],n)<<" "<<setBit(b[1],n)<<endl;
    }
  }
}