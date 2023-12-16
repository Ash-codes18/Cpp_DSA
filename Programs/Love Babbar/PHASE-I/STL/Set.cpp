// Behind the scenes it is implemented using binary search tree (BST)
//All the elements of a set are unique, elements added in a set cannot be modified after being added, elements are returned in sorted order

#include <iostream>
#include <set>

using namespace std;

int main(){

    set<int> s;

    s.insert(1);
    s.insert(3);
    s.insert(5);
    s.insert(3);
    s.insert(7);
    s.insert(3);
    cout << "Size of Set: "<<s.size()<<endl; // 4

    cout << "Set : ";
    for(int i : s){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"After erase : ";

    s.erase(3); //Deletes the element having the value 3
    for(int i : s){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"After removing the front element : ";
    s.erase(s.begin());
    for(int i : s){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Is 4 present in the Set : "<<s.count(4)<<endl;
    cout<<"Is 7 present in the Set : "<<s.count(7)<<endl;

    set<int>::iterator itr = s.find(7); //returns the iterator of the given element

    cout<<"The element present at the iterator : "<<*itr<<endl; //derefrencing the iterator 

    return 0;
}