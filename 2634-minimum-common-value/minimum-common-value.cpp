class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
       if(nums1.size()>nums2.size())
       swap (nums1,nums2);

       for( int x: nums1){
        int low=0;
        int high =nums2.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums2[mid]==x){
                return x;
            }else if(nums2[mid]>x){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
       
       }
       return -1;
    }
};