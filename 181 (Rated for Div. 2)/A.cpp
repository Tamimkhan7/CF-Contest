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

void solve()
{
    string s;
    cin >> s;
    for (int i = 0; i < (int)s.size() - 2; i++)
    {
        string ss = s.substr(i, 3);
        // show(ss);
        if (ss == "FFT" || ss == "NTT")
        {
            char c = s[i];
            s.erase(s.begin() + i);
            s.push_back(c);
            // show(s);
            if (i == 0)
                i--;
            else if (i == 1)
                i -= 2;
            else
                i -= 3;
            /// show(i);
        }
    }
    cout << s << '\n';
}

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
