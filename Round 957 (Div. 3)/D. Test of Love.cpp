#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007

int main()
{
    MTK;
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;
        ll a = m - 1, b = 0, c = 0;
        for (auto x : s)
        {
            if (x == 'L')
                a = m;
            else if (x == 'W' and a <= 0)
                b++;
            else if (x == 'C' and a <= 0)
                c++;
            a--;
        }
        // cout << a << ' ' << b << ' ' << c << '\n';
        c += (b > k);

        if (c == 0)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}
