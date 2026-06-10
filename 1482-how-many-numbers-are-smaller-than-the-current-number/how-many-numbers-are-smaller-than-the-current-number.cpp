class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> num=nums;
     unordered_map<int,int> m;   
     sort(num.begin(),num.end());
      m[num[0]]=0;
      
     for (int i=1;i<num.size();i++){
        if(num[i]!=num[i-1]){
         m[num[i]]=i;


        }
    }
    vector<int> result;
     for (int i=0;i<nums.size();i++){
        result.push_back(m[nums[i]]);
     }
     
     return result ;
    }
};