#include <iostream>
using namespace std;

class heap{
    public: 
        int arr[100];
        int size;

        heap(){
            arr[0] = -1;
            size = 0;
        }

        void insert(int val){
            size++;
            int ind = size;
            arr[ind] = val;
            while(ind>1){ 
                int parent = ind/2;
                if(arr[parent]<arr[ind]){
                    swap(arr[ind],arr[parent]);
                    ind = parent;
                }
                else return;
            }
        }

        void remove(){
            if(size==0){
                cout<<"Heap is empty"<<endl;
                return;
            }
            arr[1] = arr[size];
            size--;
            int ind = 1;
            while(ind<size){
                int left=-1,right=-1;
                if(ind*2<=size) left = arr[ind*2];
                if((ind*2)+1<=size) right = arr[(ind*2)+1];

                if(left>right && arr[ind]<left){
                    swap(arr[ind],arr[ind*2]);
                    ind*=2;
                }
                else if(left<right && arr[ind]<right){
                    swap(arr[ind],arr[(ind*2)+1]);
                    ind=(ind*2)+1;
                }
                else return;
            }
        }

        void print(){
            for(int i=1;i<=size;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};


void heapify(int arr){
    
    

}


int main() {

    heap h;
    h.insert(50);
    h.insert(10);
    h.insert(55);
    h.insert(52);
    h.insert(12);
    h.insert(92);
    
    h.print();
    h.remove();
    h.print();


    return 0;
}