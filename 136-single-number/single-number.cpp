class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result =0;
        int count;
        for (int i=0;i<nums.size();i++){
            count=0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
            if (count==1){
             result = nums[i];
            }
        }
       return result; 
    }
};