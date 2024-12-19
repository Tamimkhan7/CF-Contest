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
bool cmp(pair<char, int> a, pair<char, int> b)
{
    return a.second < b.second;
}

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < n; i++)
            mp[s[i]]++;
        vector<pair<char, int>> v(all(mp));
        sort(all(v), cmp);
        int nn = v.size();
        char first_ch = v[0].first;
        char last_ch = v[nn - 1].first;
        // show(first_ch), show(last_ch);
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (cnt == 0 and s[i] == first_ch)
            {
                cout << last_ch;
                cnt++;
            }
            else
                cout << s[i];
        }
        // for (auto [x, y] : v)
        //     cout << x << ' ' << y << '\n';
        cout << '\n';
        // cout << s << '\n';
    }
    return 0;
}