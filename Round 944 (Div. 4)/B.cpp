#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int long long
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        map<char, int> mp;
        for (auto c : s)      
            mp[c]++;
       
        if (mp.size() > 1)
        {
            cout << "YES" << '\n';
            string ans = s;
            reverse(ans.begin(), ans.end());
            if (s == ans)
            {
                sort(s.begin(), s.end());
                cout << s << '\n';
            }
            else
                cout << ans << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    return 0;
}