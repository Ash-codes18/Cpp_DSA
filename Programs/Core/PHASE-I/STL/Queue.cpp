//Follows FIFO

#include <iostream>
#include <queue>

using namespace std;

int main(){

    queue<string> q;

    q.push("Bubbly");
    q.push("Tannu");
    q.push("Mannu");
    q.push("Bunty");

    cout<<"Front Element : "<<q.front()<<endl;
    cout<<"Back Element : "<<q.back()<<endl;
    cout<<"Size befor pop : "<<q.size()<<endl;    

    q.pop();
    q.pop();

    cout<<"Size after popping : "<<q.size()<<endl;





    return 0;
}