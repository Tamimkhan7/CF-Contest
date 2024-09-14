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
        string s = "";
        for (int i = 0; i < n; i++)
        {
            if (i % 5 == 0)
                s += 'a';
            else if (i % 5 == 1)
                s += 'e';
            else if (i % 5 == 2)
                s += 'i';
            else if (i % 5 == 3)
                s += 'o';
            else if (i % 5 == 4)
                s += 'u';
        }
        sort(all(s));
        cout << s << '\n';
    }
    return 0;
}