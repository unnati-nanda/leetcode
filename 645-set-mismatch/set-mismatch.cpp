class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int, int> m;
        for (int i = 1; i <= nums.size(); i++) {
            m[i] = 0;
        }

        for (int num : nums) {
            m[num]++;
        }

        int duplicate, missing;

        for (int i = 1; i <= nums.size(); i++) {
            if (m[i] == 2)
                duplicate = i;
            if (m[i] == 0)
                missing = i;
        }

        return {duplicate, missing};
    }
};
