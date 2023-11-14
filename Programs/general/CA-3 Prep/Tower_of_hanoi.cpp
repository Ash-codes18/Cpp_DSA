#include <iostream>
using namespace std;


int hanoi(int n, char source_rod,char to_rod,char aux_rod){

    int count=0;

    if(n==0){
        return 0;
    }

    count+=hanoi(n-1,source_rod,aux_rod,to_rod);
    count++;
    count+=hanoi(n-1,aux_rod,to_rod,source_rod);

return count;
}


int main(){

    int n;
    cin>>n;
    int ans=hanoi(n,'A','C','B');
    cout<<ans;
    return 0;
}