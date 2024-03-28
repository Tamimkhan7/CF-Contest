#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string h = s.substr(0, 2);
        string m = s.substr(3, 2);
        int hour, minute;
        hour = stoi(h);
        if (hour >= 12)
        {
            if (hour > 12)
                hour %= 12;
            string x = to_string(hour);
            string ans, res;
            if (x.size() == 1)
                ans = '0' + x;
            else
                ans = x;

            cout << ans << ':' << m << ' ' << "PM" << '\n';
        }
        else
        {
            if (hour == 0)
                hour = 12;
            string x = to_string(hour);
            string ans, res;
            if (x.size() == 1)
                ans = '0' + x;
            else
                ans = x;

            cout << ans << ':' << m << ' ' << "AM" << '\n';
        }
    }
}
