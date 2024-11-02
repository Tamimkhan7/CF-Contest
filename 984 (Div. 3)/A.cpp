#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int long long

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        bool flag = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (abs(v[i] - v[i + 1]) == 7 || abs(v[i] - v[i + 1]) == 5)
                continue;
            else
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }
    return 0;
}