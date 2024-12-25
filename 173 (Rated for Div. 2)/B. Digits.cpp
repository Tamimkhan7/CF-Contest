#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
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
        int n, d;
        cin >> n >> d;
        vector<int> ans;
        ans.push_back(1);
        if (d == 0 || d == 5)
            ans.push_back(5);
            
        if ((d + d) % 3 == 0)
            ans.push_back(3);
        if ((d + d) % 9 == 0)
            ans.push_back(9);
        sort(all(ans));
        for (auto x : ans)
            cout << x << ' ';
        cout << '\n';
    }
    return 0;
}