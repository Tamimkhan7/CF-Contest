class Solution
{
public:
    vector<int> resultsArray(vector<int> &v, int k)
    {
        int n = v.size();
        vector<int> ans;
        for (int i = 0; i < n - k + 1; i++)
        {
            bool ok = true;
            int mx = 0;
            for (int j = i; j < i + k - 1; j++)
            {
                if (v[j] < v[j + 1] and v[j + 1] - v[j] == 1)
                {
                    mx = max(mx, v[j + 1]);
                }
                else
                {
                    ok = false;
                    break;
                }
            }
            if (k == 1)
                mx = max(mx, v[i]);
            if (ok)
                ans.push_back(mx);
            else
                ans.push_back(-1);
        }
        return ans;
    }
};