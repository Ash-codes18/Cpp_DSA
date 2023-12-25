class Solution {
  public:
  
  int getmax(int a, int b, int c){
      if(a>b && a>c){
          return a;
      }
      else if(b>a && b>c){
          return b;
      }
      else if(c>a && c>b){
          return c;
      }
      else if(a==b && a>c){
          return a;
      }
      else if(b==c && b>a){
          return b;
      }
      else{
          return c;
      }
  }
  
  int getmin(int a, int b, int c){
      if(a<b && a<c){
          return a;
      }
      else if(b<a && b<c){
          return b;
      }
     else if(c<a && c<b){
          return c;
      }
      else if(a==b && a<c){
          return a;
      }
      else if(b==c && b<a){
          return b;
      }
      else{
          return c;
      }   
  }
  
  
    int minDist(int x1, int x2, int x3) {
        // code here
        int s= getmax(x1,x2,x3);
        int e=getmin(x1,x2,x3);
        int m=(x1+x2+x3)-(s+e);
        
        
        return abs(e-m+m-s);
        
    }
};