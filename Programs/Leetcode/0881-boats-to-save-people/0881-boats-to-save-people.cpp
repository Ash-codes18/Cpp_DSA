class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        sort(people.begin(),people.end());
        
        int s = 0;
        int e = n-1;

        int count = 0;

        while(s<=e){

            if(s==e){
                count++;
                break;
            }


            else if(people[e]==limit){
                count++;
                e--;    
            }

            else{
                int sum=people[s]+people[e];

                if(sum>limit){
                    count++;
                    e--;
                }
                else{
                    count++;
                    e--;
                    s++;
                }
            }      
        }
        
return count;

    }
};