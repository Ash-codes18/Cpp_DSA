    #include <bits/stdc++.h>
    using namespace std;

int main() {
    long long int t, N, i=0, sum3=0, sum5=0, sum15=0;
    cin >> t;
    while(i<t){
        cin >> N;
        N=N-1;
        sum3 = 3 * ((N/3) * ((N/3) + 1) ) / 2;
        sum5 = 5 * ((N/5) * ((N/5) + 1) ) / 2;
        sum15 = 15 * ((N/15) * ((N/15) + 1) ) / 2;       
        cout << sum3 + sum5 - sum15 << endl;
        sum3=sum5=sum15=0;
        i++;
    }


    return 0;
}
