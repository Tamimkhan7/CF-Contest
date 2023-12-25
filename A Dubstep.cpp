#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
int32_t main()
{
    faster;
    string s;
    cin >> s;
    int n = s.size();

    int flag = 1, x = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'W' and s[i + 1] == 'U' and s[i + 2] == 'B' || s[i - 1] == 'W' and s[i] == 'U' and s[i + 1] == 'B' || s[i - 2] == 'W' and s[i - 1] == 'U' and s[i] == 'B')
        {
            if (x == 0 and flag == 1)
            {
                cout << ' ';
                flag++;
                x++;
            }
            continue;
        }
        else
        {
            x = 0, flag = 1;
            cout << s[i];
        }
    }
}