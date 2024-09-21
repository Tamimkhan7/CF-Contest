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
        int even = 0, odd = 0;
        vector<int> ev, od;
        for (int i = 2; i <= n; i += 2)
        {
            even += i;
            ev.push_back(i);
        }
        int cnt = 0;
        for (int i = 1; i <= n; i += 2)
        {
            cnt++;
            odd += i;
            od.push_back(i);
            if (cnt == n / 2 - 1)
                break;
        }
        int x = even - odd;
        if (x % 2 == 1 and find(all(od), x) == od.end())
        {

            od.push_back(x);
            cout << "YES" << '\n';
            for (auto x : ev)
                cout << x << ' ';
            for (auto x : od)
                cout << x << ' ';
            cout << '\n';
        }
        else
            cout << "NO" << '\n';
    }
    return 0;
}