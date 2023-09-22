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
    ll t;
    cin >> t;
    while (t--)
    {
        string s, s2, s3;
        cin >> s;
        int len = s.size();
        for (int i = len; i >= 0; i--)
        {
            s2 += s[i];
        }
        // cout << s2 << endl;

        for (int i = 0; i < len; i++)
        {
            if (s[i] == s2[i])
            {
                s3 += s[i];
            }
        }

        if (s == s2)
            cout << -1 << endl;
        else
            cout << len << endl;
    }
}