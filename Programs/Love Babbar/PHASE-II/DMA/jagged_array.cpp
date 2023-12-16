    #include <iostream>
    using namespace std;

    int main(){

        int n;
        
        cout<<"Enter the no. of rows :";
        cin>>n;

        int *cols = new int[n];

        for(int i=0;i<n;i++){
            cout<<"Enter the no. of cols for row "<<i+1<<" : ";
            cin>>cols[i];
        }


        int **arr = new int*[n]; 

        for(int i=0;i<n;i++){
            arr[i] = new int[cols[i]];
        } 

    
        
        for(int i=0;i<n;i++){
            for(int j=0;j<cols[i];j++){
                cin>>arr[i][j];
            }
        }


        for(int i=0;i<n;i++){
            for(int j=0;j<cols[i];j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }


        for(int i=0;i<n;i++){
            delete [] arr[cols[i]];
        } 

        delete [] arr;

        delete [] cols;







        return 0;
    }