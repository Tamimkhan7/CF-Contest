#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, m;
        cin >> n >> k;
        m = n;
        vector<int> v;
        int sum = 0, c = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                // v.push_back(i);
                sum += i;
                if (sum < m)
                {
                    c++;
                    sum -= i;
                }
                else if (sum == m)
                {
                    break;
                }
            }
        }
        if (k == c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}