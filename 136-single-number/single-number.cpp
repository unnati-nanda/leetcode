class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int XOR = 0;
        for (auto it : nums) {
            XOR = XOR ^ it;
        }
        return XOR;
    }
};