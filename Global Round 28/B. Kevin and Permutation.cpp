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
        int n, k;
        cin >> n >> k;
        deque<int> d;
        for (int i = 1; i <= n; i++)
            d.push_back(i);
        vector<int> ans;
        while (!d.empty())
        {
            int x = k;
            while (!d.empty() and x > 1)
            {
                ans.push_back(d.back());
                d.pop_back();
                x--;
            }
            if (!d.empty())
            {
                ans.push_back(d.front());
                d.pop_front();
                x--;
            }
        }
        for (auto x : ans)
            cout << x << ' ';
        cout << '\n';
    }
    return 0;
}