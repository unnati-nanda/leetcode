class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> check = heights;
        sort(check.begin(), check.end());
        int count=0;
        for ( int i=0;i<check.size();i++){
            if(heights[i]!=check[i]){
                count++;
            }
        }
        return count;
    }
};