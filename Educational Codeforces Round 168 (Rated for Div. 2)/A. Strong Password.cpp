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

int calculatetime(string s)
{
    int n = s.size();
    if (n == 0)
        return 0;
    int time = 2;
    for (int i = 1; i < n; ++i)
    {
        if (s[i] == s[i - 1])
            time += 1;
        else
            time += 2;
    }
    return time;
}

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    string best_s;
    int max_time = 0;

    for (char c = 'a'; c <= 'z'; ++c)
    {
        for (int i = 0; i <= n; ++i)
        {
            string temp = s;
            temp.insert(temp.begin() + i, c);
            int time = calculatetime(temp);
            if (time > max_time)
            {
                max_time = time;
                best_s = temp;
            }
        }
    }

    cout << best_s << '\n';
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
