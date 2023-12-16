#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    vector<int> v;

    v.push_back(1);
    v.push_back(7);
    v.push_back(4);
    v.push_back(34);

    cout<<endl;

    cout<<"Finding 34 using binary search : "<<binary_search(v.begin(),v.end(),34)<<endl<<endl;

    cout<<"Lower Bound of 4 : "<<lower_bound(v.begin(),v.end(),4)-v.begin()<<endl;
    cout<<"Upper Bound of 4 : "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;
    

    cout<<"Lower Bound of 34 : "<<lower_bound(v.begin(),v.end(),34)-v.begin()<<endl;
    cout<<"Upper Bound of 34 : "<<upper_bound(v.begin(),v.end(),34)-v.begin()<<endl<<endl;

    int a=4;
    int b=2;

    cout<<"Max : "<<max(a,b)<<endl;
    cout<<"Min : "<<min(a,b)<<endl<<endl;

    cout<<"Before Swap :"<<endl<<" a-> "<<a<<endl<<" b-> "<<b<<endl;
    swap(a,b);
    cout<<"After Swap :"<<endl<<" a-> "<<a<<endl<<" b-> "<<b<<endl<<endl;

    string halua="halua hai kya";
    cout<<"String before reversing : "<<halua<<endl;
    reverse(halua.begin(),halua.end());
    cout<<"After Reverse : "<<halua<<endl;
    cout<<endl;
    
    cout<<"Rotating a Vector ->"<<endl;

    cout<<"Before rotating : ";
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"After rotating : ";
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl<<endl;

    //The sort function uses Intro sort, intro sort is a combination of 3 sorting algos, namely inserting sort, quick sort, and heap sort.
    
    cout<<"Sorting a Vector -> ";
    sort(v.begin(),v.end());
    for(auto i:v){
        cout<<i<<" ";
    }

    cout<<endl;
    

    return 0;
}