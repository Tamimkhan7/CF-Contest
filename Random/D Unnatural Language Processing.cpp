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
        int n;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if ((s[i] == 'b' || s[i] == 'c' || s[i] == 'd') and (s[i + 1] == 'a' || s[i + 1] == 'e') and (s[i + 2] == 'b' || s[i + 2] == 'c' || s[i + 2] == 'd') and s[i + 3] == '\0')
            {
                cout << s[i] << s[i + 1] << s[i + 2];
            }
            else if ((s[i] == 'b' || s[i] == 'c' || s[i] == 'd') and (s[i + 1] == 'a' || s[i + 1] == 'e') and s[i + 2] == '\0')
            {
                cout << s[i] << s[i + 1];
            }
            else if ((s[i] == 'b' || s[i] == 'c' || s[i] == 'd') and (s[i + 1] == 'a' || s[i + 1] == 'e') and (s[i + 2] == 'b' || s[i + 2] == 'c' || s[i + 2] == 'd') and (s[i + 3] == 'a' || s[i + 3] == 'e'))
            {
                // cout << "1st " << '\n';
                // cout << s[i] << ' ' << s[i + 1] << ' ' << s[i + 2] << ' ' << s[i + 3] << '\n';
                cout << s[i] << s[i + 1] << '.';
                i += 1;
            }
            else if ((s[i] == 'b' || s[i] == 'c' || s[i] == 'd') and (s[i + 1] == 'a' || s[i + 1] == 'e') and (s[i + 2] == 'b' || s[i + 2] == 'c' || s[i + 2] == 'd') and (s[i + 3] == 'b' || s[i + 3] == 'c' || s[i + 3] == 'd'))
            {
                // cout << "2rd " << '\n';
                cout << s[i] << s[i + 1] << s[i + 2] << '.';
                i += 2;
            }
            else if ((s[i] == 'b' || s[i] == 'c' || s[i] == 'd') and (s[i + 1] == 'a' || s[i + 1] == 'e'))
            {
                // cout << "3rd " << '\n';
                cout << s[i] << s[i + 1] << '.';
                i += 1;
            }
        }
        cout << '\n';
    }
}