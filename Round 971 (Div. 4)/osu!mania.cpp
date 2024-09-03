#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char c[n][4];
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 4; j++)
                cin >> c[i][j];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 4; j++)
                if (c[i][j] == '#')
                    v.push_back(j + 1);
        }
        reverse(all(v));
        for (auto x : v)
            cout << x << ' ';
        cout << '\n';
    }
    return 0;
}