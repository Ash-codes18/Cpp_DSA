class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int, int> counter;

        for (int num : arr) {
            counter[num]++;
        }

        unordered_set<int> occurrenceSet;

        for (const auto& pair : counter) {
            int occurrence = pair.second;
            if (occurrenceSet.count(occurrence) > 0) {
                return false;
            }
            occurrenceSet.insert(occurrence);
        }

        return true;
    }
};
