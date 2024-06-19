#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    
    int n;
    cout<<"Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }


    vector<int> nge(n,-1);
    stack<int> s;

    for(int i=n-1;i>=0;i--){
        while(!s.empty() && arr[i] > s.top()){
            s.pop();
        }
        if(!s.empty()){
            nge[i] = s.top();
        }
        s.push(arr[i]);
    }

    cout<<"Next Greater Element: "<<endl;
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }


    return 0;
}