#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string xp = s;
        int zero = 0, one = 0;
        sort(s.begin(), s.end());
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                zero++;
            else
                one++;
        }
        int res = max(one, zero) - min(one, zero);
        int MAXI = max(one, zero);
        int MINI = min(one, zero);
        if (MINI * 2 == MAXI and MAXI > 2)
            cout << MAXI << '\n';
        else
            cout << res << '\n';
    }
}