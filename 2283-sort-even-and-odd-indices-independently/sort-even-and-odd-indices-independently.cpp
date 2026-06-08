class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;
        vector<int> result;
        for ( int i=0;i<nums.size();i+=2){
          even.push_back(nums[i]);
        }
        
        for ( int i=1;i<nums.size();i+=2){
            odd.push_back(nums[i]);
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end(),greater<int>());
       int x=0,y=0;
       for(int i=0;i<nums.size();i++){
        if(i%2==0){
            result.push_back(even[y]);
            y++;
        }
        else if (i%2!=0){
            result.push_back(odd[x]);
            x++;
        }
       }
       return result;
    }
};