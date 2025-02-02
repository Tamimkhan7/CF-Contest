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
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        sort(all(a));
        sort(all(b));
        // reverse(all(b));
        int front = b[0];
        b.erase(b.begin());
        b.push_back(front);
        set<int> se;
        bool ok = false;
        for (int i = 0; i < n; i++)
        {
            int x = a[i] + b[i];
            se.insert(x);
            if (se.size() > 2)
            {
                ok = true;
                break;
            }
        }
        if (ok)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}