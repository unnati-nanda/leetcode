class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;

        v.push_back({1});
        for (int i = 1; i < numRows; i++) {
            vector<int> vect(i+1,1);
           vector<int>&prev=v[i-1];

            for (int j = 1; j < i; j++) {
                vect[j]=prev[j]+prev[j-1];
            }
            
            v.push_back(vect);
        }

        return v;
    }
};