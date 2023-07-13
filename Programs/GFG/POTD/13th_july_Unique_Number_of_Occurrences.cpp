//User function Template for C++

class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
       unordered_map<int, int> map;
    for (int i=0; i<n; i++)
        map[arr[i]] = map[arr[i]] + 1;

   unordered_set<int> set;
    for (const auto& pair : map) {
        int x = pair.second;
        if (set.count(x) > 0)
            return false;

        set.insert(x);
    }
    return true; 
    }
};