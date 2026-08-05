class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mpp;
        for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
        }
      priority_queue<pair<int,char>>p;
      for(auto it:mpp){
        p.push({it.second,it.first});
      }

      string ans="";
      pair<int,char> element;
      while(!p.empty()){
        element = p.top();
        p.pop();
        char c=element.second;
        int times=element.first;
        while(times){
            ans+=c;
            times--;
        }
      }
        return ans;

    }
};