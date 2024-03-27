#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
int main()
{
    faster;
    int t;
    cin >> t;
    string s, p, q;
    int r, e, l;
    while (t--)
    {
        cin >> s;
        l = s.size();
        if (l % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            e = l / 2;
            r = l - e;
            for (int i = 0; i < e; i++)
            {
                p += s[i];
            }
            for (int j = 0; j < r; j++)
            {
                q += s[j];
            }
            if (p == q)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}
