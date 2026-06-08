class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
      vector<string> result;
      unordered_map<int,string> m;
      for(int i= 0;i<names.size();i++){
        m[heights[i]]=names[i];
      }  
      sort(heights.begin(),heights.end(),greater<int>());
      for (auto i:heights){
        result.push_back(m[i]);
      }
      return result;
    }
};