#include<bits/stdc++.h>
using namespace std; 
void Sum(int arr[6][6])
{
  int sum=-1000;
  for(int i =0 ; i<4;i++)
  {
    for(int x =0 ; x<4; x++)
    {                   
      int top = arr[i][x]+arr[i][x+1]+arr[i][x+2];
      int middle = arr[i+1][x+1];
      int bottom = arr[i+2][x]+arr[i+2][x+1]+arr[i+2][x+2];
      if(top+middle+bottom>sum){sum=top+middle+bottom;}
    }
  }
  cout<<sum<<endl;          
}
int main()
{   
  int arr[6][6];
  for(int arr_i=0; arr_i < 6; arr_i++)
  {
    for(int arr_j=0; arr_j < 6; arr_j++)
    {
      int temp;
      cin>>temp;
      arr[arr_i][arr_j] = temp;
    }
  }           
  Sum(arr);     
}    