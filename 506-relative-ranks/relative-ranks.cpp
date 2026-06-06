class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> placement = score;
        sort(placement.begin(), placement.end(),greater<int>());
        vector<string> rank;

        unordered_map<int, string> m;
        for (int i = 0; i < placement.size(); i++) {
            if (i == 0) {
                m[placement[i]] = "Gold Medal";
            } else if (i == 1) {
                m[placement[i]] = "Silver Medal";
            } else if (i == 2) {
                m[placement[i]] = "Bronze Medal";
            } else {
                m[placement[i]] = to_string(i + 1);
            }
        }
        for (int s : score) {
            rank.push_back(m[s]);
        }
       

        return rank;
    }
};