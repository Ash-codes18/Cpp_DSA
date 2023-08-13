//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends


class twoStacks {
    int *arr;
    int size;
    int top1, top2;
public:
    twoStacks(int n=100) {
        size = n;
        arr = new int[n];
        top1 = -1;
        top2 = size;
    }


    void push1(int x) {
        if (top1 < top2 - 1) {
            arr[++top1] = x;
        }
    }

    void push2(int x) {
        if (top1 < top2 - 1) {
            arr[--top2] = x;
        }
    }

    int pop1() {
        if (top1 >= 0) {
            return arr[top1--];
        }
        return -1;
    }

    int pop2() {
        if (top2 < size) {
            return arr[top2++];
        }
        return -1;
    }
};




//{ Driver Code Starts.

int main()
{

    int T;
    cin>>T;
    while(T--)
    {
        twoStacks *sq = new twoStacks();

        int Q;
        cin>>Q;
        while(Q--){
        int stack_no;
        cin>>stack_no;
        int QueryType=0;
        cin>>QueryType;
        
        if(QueryType==1)
        {
            int a;
            cin>>a;
            if(stack_no ==1)
            sq->push1(a);
            else if(stack_no==2)
            sq->push2(a);
        }else if(QueryType==2){
        	if(stack_no==1)
            cout<<sq->pop1()<<" ";
            else if(stack_no==2)
            cout<<sq->pop2()<<" ";

        }
        }
        cout<<endl;
    }
}

// } Driver Code Ends