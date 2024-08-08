class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int ones = 0;
        int zeros = 0;
        for(int i : students){
            if(i==0) zeros++;
            if(i==1) ones++;
        }

        for(int i=0;i<sandwiches.size();i++){
            if(sandwiches[i]==0){
                if(zeros<1)  return sandwiches.size()-i;
                zeros--;
            }
            else{
                if(ones<1)  return sandwiches.size()-i;
                ones--;
            }
        }

        return 0;
    }
};