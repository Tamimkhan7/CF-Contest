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
        string a;
        cin >> a;

        string b;
        for (int i = a.size() - 1; i >= 0; --i)
        {
            if (a[i] == 'p')
                b += 'q';
            else if (a[i] == 'q')
                b += 'p';
            else
                b += 'w';
        }
        cout << b << '\n';
    }
    return 0;
}