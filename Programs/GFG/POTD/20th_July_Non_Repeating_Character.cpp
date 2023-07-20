class Solution {
public:
    char nonrepeatingCharacter(string S) {
        unordered_map<char, int> char_freq;

        for (char ch : S) {
            char_freq[ch]++;
        }

        for (char ch : S) {
            if (char_freq[ch] == 1) {
                return ch;
            }
        }

        return '$'; 
    }
};
