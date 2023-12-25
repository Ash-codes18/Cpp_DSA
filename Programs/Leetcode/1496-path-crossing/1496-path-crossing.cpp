class Solution {
public:

    bool vectorExists(vector<vector<int>>& vec2D,vector<int>& vecToCheck) {
    return std::find(vec2D.begin(), vec2D.end(), vecToCheck) != vec2D.end();
}

    bool isPathCrossing(string path) {
        int x=0;
        int y=0;

        int n=path.length();

        vector<pair<int,int>> coordinates;
        coordinates.push_back({x,y});

        pair<int,int> temp;


        for(int i=0;i<n;i++){
           
            if(path[i]=='N'){
                y++;
            }
            else if(path[i]=='S'){
                y--;
            }
            else if(path[i]=='E'){
                x++;
            }
            else{
                x--;
            }

            temp={x,y};

            for (auto &coord : coordinates) {
                if (coord == temp) {
                    return true;
                }
            }

            coordinates.push_back(temp);

        }

    return false;

    }
};