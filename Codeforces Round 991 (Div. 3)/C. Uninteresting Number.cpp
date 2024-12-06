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
    int n = s.size();
    ll two = 0, three = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '3')
            three++;
        else if (s[i] == '2')
            two++;
        int x = s[i] - '0';
        sum += x;
        sum %= 9;
    }

    if (sum % 9 == 0)
    {
        cout << "YES" << '\n';
        return;
    }

    for (int i = 0; i < two; i++)
    {
        sum += 2;
        sum %= 9;
        if (sum % 9 == 0)
        {
            cout << "YES" << '\n';
            return;
        }
    }
    // sum += 9;
    // sum %= 9;
    ll remtwo = min((ll)2, two);
    // show(remtwo);

    for (ll i = 0; i < three; i++)
    {
        sum += 6;
        sum %= 9;
        for (ll j = 0; j <= remtwo; j++)
        {
            ll tem = sum - 2 * j;

            if (tem % 9 == 0)
            {
                cout << "YES" << '\n';
                return;
            }
        }
    }
    cout << "NO" << '\n';
}

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}