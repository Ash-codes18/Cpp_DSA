class Compare {
public:
    bool operator()(pair<string, int> &a, pair<string, int> &b) {
        if(a.second != b.second)
            return a.second < b.second;
        else
            return a.first > b.first; 
    }
};


class FoodRatings {
public:
    unordered_map<string,int> food;
    unordered_map<string,priority_queue<pair<string,int>, vector<pair<string,int>>, Compare>> mp;
    unordered_map<string,string> type;

    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        int n = foods.size();
        for(int i=0;i<n;i++){
            string f = foods[i];
            string c = cuisines[i];
            int r = ratings[i];

            food[f]=r;
            mp[c].push({f,r});
            type[f]=c;
        }
    }
    
    void changeRating(string f, int n) {
        food[f] = n;
        mp[type[f]].push({f,n});
    }
    
    string highestRated(string cuisine) {
        auto &pq = mp[cuisine];
        
        while (!pq.empty()) {
            auto top = pq.top();
            if (food[top.first] == top.second)
                break;
            pq.pop();
        }
        
        return pq.top().first;
    }
};