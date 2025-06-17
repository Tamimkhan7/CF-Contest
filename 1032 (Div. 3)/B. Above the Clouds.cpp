#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    unordered_set<char> pre;
    vector<int> suf(26, 0);

    for (int i = 1; i < n; i++)
        suf[s[i] - 'a']++;

    for (int i = 1; i < n - 1; i++)
    {
        pre.insert(s[i - 1]);
        suf[s[i] - 'a']--;

        if (pre.count(s[i]) || suf[s[i] - 'a'] > 0)
        {
            cout << "Yes\n";
            return;
        }
    }

    cout << "No\n";
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
