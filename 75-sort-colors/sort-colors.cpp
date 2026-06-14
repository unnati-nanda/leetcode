class Solution {
public:
    void sortColors(vector<int>& nums) {
         int j=0;
    for ( int i=0;i<nums.size();i++){
        j=i;
        while(j>0&&nums[j-1]>nums[j]){
            swap(nums[j-1],nums[j]);
            j--;
        }
    }
      
        
    }
};