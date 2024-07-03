/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> v(m, vector<int>(n, -1));

        int sc = 0, sr = 0, ec = n - 1, er = m - 1;
        int count = 0;
        int size = m * n;

        while (count < size && head) {
            // Right
            for (int i = sc; i <= ec && head; i++) {
                v[sr][i] = head->val;
                head = head->next;
                count++;
            }
            sr++;

            // Down
            for (int i = sr; i <= er && head; i++) {
                v[i][ec] = head->val;
                head = head->next;
                count++;
            }
            ec--;

            // Left
            if (sr <= er) {
                for (int i = ec; i >= sc && head; i--) {
                    v[er][i] = head->val;
                    head = head->next;
                    count++;
                }
            }
            er--;

            // Up
            if (sc <= ec) {
                for (int i = er; i >= sr && head; i--) {
                    v[i][sc] = head->val;
                    head = head->next;
                    count++;
                }
            }
            sc++;
        }

        return v;
    }
};
