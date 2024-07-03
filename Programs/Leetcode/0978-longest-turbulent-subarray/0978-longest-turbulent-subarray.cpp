class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int n = arr.size();
        vector<int> signs;

        for(int i=0;i+1<n;i++){
            if(arr[i]<arr[i+1]){
                signs.push_back(-1);
            }
            else if(arr[i]>arr[i+1]){
                signs.push_back(1);
            }
            else{
                signs.push_back(0);
            }
        }

        int len = 0;
        int count = 0;
        bool ne = 0;

        for(int i=0;i+1<signs.size();i++){
            if(signs[i]!=0 || signs[i+1]!=0){
                ne=1;
            }
            if(signs[i]!=0 && signs[i+1]!=0 && signs[i]!=signs[i+1]){
                count++;
            }
            else{
                len=max(count,len);
                count=0;
            }
        }
        

        if(!signs.empty() && signs[0] != 0){
            ne=1;
        }

        len=max(count,len);

        if((!ne && len==0) || (!ne && signs.size()==1)){
            return 1;
        }


return (signs.empty())?1:len+2;

    }
};