class Solution {
public:
    string reorganizeString(string s) {
        int n = s.length();
        priority_queue<pair<int,char>> pq;
        vector<int> arr(26);

        for(char &i : s) arr[i-'a']++;
        
        for(int i=0;i<26;i++){
            if(arr[i]>0)
                pq.push({arr[i],i+'a'});
        }

        string res;

        while(pq.size()>1){
 
            auto top1= pq.top();
            pq.pop();
            auto top2 = pq.top();
            pq.pop();
            
            res.push_back(top1.second);
            res.push_back(top2.second);
            
            top1.first--;
            top2.first--;
            
            if(top1.first > 0) pq.push(top1);
            if(top2.first > 0) pq.push(top2);
        }
        
        if(!pq.empty()){
            if(pq.top().first > 1) return "";
            else res+=pq.top().second;
        }
        
        return res;
    }
};