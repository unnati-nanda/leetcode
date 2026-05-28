class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> v;
        int n=nums.size();
        set<int> s(nums.begin(),nums.end());
        vector<int> temp(s.begin(),s.end());
         int i=0;
         for (int c=1;c<=n;c++){
            if(i<temp.size()&&temp[i]==c){
                i++;
            }else{
                v.push_back(c);
            }
         }
         return v;
    }
};