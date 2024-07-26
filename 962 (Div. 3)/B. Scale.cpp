#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<vector<char>> v(n, vector<char>(n));

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cin >> v[i][j];
            }
        }

        for (int i = 0; i < n; i += k)
        {
            for (int j = 0; j < n; j += k)           
                cout << v[i][j];
           
            cout << '\n';
        }
    }

    return 0;
}
