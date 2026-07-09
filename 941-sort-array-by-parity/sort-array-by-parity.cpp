class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> result;
        vector<int> ans;
    
        
        int i=0;
        while(i!=nums.size()){
            if (nums[i]%2==0){
                ans.push_back(nums[i]);
            }else {
                result.push_back(nums[i]);
            }
            i++;
        }
        for ( int x:result){
            ans.push_back(x);
        }
        return ans;
    }
};