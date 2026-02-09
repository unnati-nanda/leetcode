class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> num1(nums1.begin(),nums1.end());
        set<int> num2(nums2.begin(),nums2.end());
        vector<int> result;
        for(int x:num1){
            if(num2.count(x)){
                result.push_back(x);
            }
        }
         return result;
    }
};