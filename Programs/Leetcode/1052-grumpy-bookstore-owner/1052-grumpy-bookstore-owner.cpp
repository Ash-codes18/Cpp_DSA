// All we need to do is find the max sub array sim of window minutes considering only the elements where the owner is grumpy in the sum

class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int m = grumpy.size();

        int sub = 0, temp = 0;
        int ans = 0;
        int j = 0;

        for(int i=0;i<n;i++){
            if(!grumpy[i]){
                ans+=customers[i];
            }
        }    

        for(int i=0;i<minutes;i++){
            if(grumpy[i]){
                temp+=customers[i];
            }
        }

        sub=temp;

        for(int i=minutes;i<n;i++){
            if(grumpy[j]){
                temp-=customers[j];
            }
            if(grumpy[i]){
                temp+=customers[i];
            }
            j++;
            sub=max(temp,sub);
        }


return ans+sub;

    }
};