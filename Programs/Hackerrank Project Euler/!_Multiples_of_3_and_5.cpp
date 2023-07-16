    #include <bits/stdc++.h>
    using namespace std;

    int summer(int n){
        int sum=0;
        for(int i=0;i<n;i++){
            if(i%3==0 || i%5==0){
                sum+=i;
            }
        }
        return sum;
    }

    int main()
    {
    int T,N;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>N;
        int sum=summer(N);
        cout<<sum<<endl;
    }

        return 0;
    }
