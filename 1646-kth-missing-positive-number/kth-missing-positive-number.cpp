class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int missing[1000];
        int x = 1;
        int i = 0;
        int y = 0;

        while (y < k) {
            if (i < arr.size() && arr[i] == x) {
                x++;
                i++;
            } 
            else {
                missing[y] = x;
                y++;
                x++;
            }
        }

        return missing[k - 1];
    }
};