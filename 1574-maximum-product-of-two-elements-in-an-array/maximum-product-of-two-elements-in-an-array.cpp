class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i=max_element(nums.begin(),nums.end())-nums.begin();
        int j=-1;
        int maxi=INT_MIN;
        for (int k=0;k<nums.size();k++){
            if(k==i) continue;
            if(nums[k]>maxi){
                maxi=nums[k];
                j=k;
            }
        }
        return (nums[i]-1)*(nums[j]-1);
        
    }
};