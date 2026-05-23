class Solution {
public:
    bool check(vector<int>& num) {

        int mini = 0;

        for (int i = 0; i < num.size() - 1; i++)
        {
            if (num[i + 1] < num[i])
            {
                mini = i + 1;
            }
        }

        int k = mini;
        vector<int> num1;

        while (k < num.size())
        {
            num1.push_back(num[k]);
            k++;
        }

        int i = 0;

        while (i < mini)
        {
            num1.push_back(num[i]);
            i++;
        }

        for (int i = 0; i < num1.size() - 1; i++)
        {
            if (num1[i + 1] < num1[i])
            {
                return false;
            }
        }

        return true;
    }
};