class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       vector< int> temp;
       float x=0;
        for ( int i=0; i<nums1.size(); i++){
           temp.push_back(nums1[i]);
        }
        for ( int i=0; i<nums2.size();i++){
            temp.push_back(nums2[i]);
        }
        sort(temp.begin(),temp.end());
        if ( temp.size()%2!=0){
            return temp[((temp.size()+1)/2)-1];
        }else {
          x=  (temp[(temp.size()/2)-1]+temp[temp.size()/2])/2.0;
         return x;
        }
        return 0;
    }
};