class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       vector <int> result;
        for ( int i=0;i<nums.size();i++){
         int x=pow((nums[i]),2);
         result.push_back(x);
        }
        sort(result.begin(),result.end());
        return result;
    }
};