// We cannot access the elements in a list directly, we need to do it iteratively 

#include <iostream>
#include <list>

using namespace std;

int main(){

    list<int> l;

    l.push_back(2);
    l.push_front(1);

    cout<<"List : ";
    for(int i : l){
        cout<<i<<" ";
    }

    cout<<endl;

    l.erase(l.begin());

    cout<<"After erase : ";
    for(int i : l){
        cout<<i<<" ";
    }

    return 0;
}