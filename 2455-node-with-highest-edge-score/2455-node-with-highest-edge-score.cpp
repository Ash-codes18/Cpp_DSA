class Solution {
public:
    int edgeScore(vector<int>& edges) {
        int n = edges.size();
        vector<long long> weight(n);
        for(int i=0;i<n;i++){
            weight[edges[i]]+=i;
        }

        vector<pair<long long,int>> srt;
        for(int i=0;i<n;i++){
            srt.push_back({weight[i],i});
        }

        sort(srt.begin(),srt.end(), [](pair<long long,int>&a , pair<long long,int> &b){
            if(a.first==b.first) return a.second<b.second;
            return a.first>b.first;
        });


        return srt[0].second;
    }
};