class Solution {
public:
    int dominantIndex(vector<int>& nums) {
       vector<int> num =nums;
       sort(num.begin(),num.end());
        int x=2*(num[num.size()-2]);
    if ( (num[num.size()-1])>=x){
        for ( int i=0;i<nums.size();i++){
            if (nums[i]==num[num.size()-1]){
                return i;
            }
        }
    }
    return -1;
    }
};