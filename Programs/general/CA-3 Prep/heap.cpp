#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main(){


    priority_queue<int> maxheap;
    priority_queue<int, vector<int>, greater<int> > minheap;

    int n,temp;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>temp;
        arr[i]=temp;
        maxheap.push(temp);
        minheap.push(temp);
    }

    make_heap(arr,arr+n);
    // sort_heap(arr,arr+n);


cout<<"Maxheap : ";
    	while (maxheap.empty() == false) 
	{ 
		cout << maxheap.top() << " "; 
		maxheap.pop(); 
	} 
    cout<<endl;
    cout<<"Minheap : ";
    	while (minheap.empty() == false) 
	{ 
		cout << minheap.top() << " "; 
		minheap.pop(); 
	} 
    cout<<endl;
    cout<<"Maxheap using array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}