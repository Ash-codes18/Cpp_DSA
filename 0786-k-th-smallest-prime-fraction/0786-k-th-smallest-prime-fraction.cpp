class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        int n = arr.size();

        map<string,double> frac;
        vector<double> d;

        for(int i=0;i<n;i++){
            for(int j = i+1;j<n;j++){
                string fraction = to_string(arr[i])+"/"+to_string(arr[j]);
                frac[fraction]=(double)arr[i]/arr[j];
                d.push_back((double)arr[i]/arr[j]);
            }
        }

        sort(d.begin(),d.end());
        double val = d[k-1];

        string a; 

        for(auto i : frac){
            if(i.second==val){
                a=i.first;
                break;
            }
        }


        vector<int> ans(2);

        string z,x;
        bool flag = false;

        for(char i : a){
            if(i=='/'){
                flag = true;
            }
            if(!flag){
                z.push_back(i);
            }
            else if(i!='/' && flag){
                x.push_back(i);
            }
        }

        ans[0]=stoi(z);
        ans[1]=stoi(x);


return ans;

    }
};