 //Follows LIFO 
 
 #include <iostream>
 #include <stack>

 using namespace std;
 
 int main(){
    
    stack<string> s;

    s.push("Bubbly");
    s.push("Tannu");
    s.push("Mannu");
    s.push("Bunty");
    
    cout<<"Top Element : "<<s.top()<<endl;
    cout<<"Size : "<<s.size()<<endl;
    
    s.pop();
    cout<<"Top Element : "<<s.top()<<endl;
    cout<<"Size : "<<s.size()<<endl;


    return 0;
 }