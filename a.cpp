#include<bits/stdc++.h> 
using namespace std;

int main()
{
  int n,m,i,j;
  int value;
  vector<vector<int> > vect; 
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>m;
    vector<int> vect_m;
    for(j=0;j<m;j++)
    {
      cin>>value;
      vect_m.push_back(value);
    }
    vect.push_back(vect_m);
  }
  int no_of_Queries;
  cin>>no_of_Queries;
  int x,y;
  for(i=0;i<no_of_Queries;i++)
  {
    cin>>x>>y;
    if(x<=n)
    {
      if(y<=vect[x-1].size())
      {
        cout<<vect[x-1][y-1]<<endl;
      }
      else cout<<"ERROR!"<<endl;
    }
    else cout<<"ERROR!"<<endl;
  }
}