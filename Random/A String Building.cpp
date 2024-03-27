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
    while (t--)
    {
        string s;
        cin >> s;
        int len = s.size();
        // sort(s.begin(), s.end);
        int c = 0, k = 0, i;
        for (i = 0; i < len; i++)
        {
            if (s[i] == 'a')
            {
                c++;
                if (k < 2)
                {
                    k = 0;
                }
                if (c == 2)
                {
                    continue;
                }
            }
            else
            {
                k++;
                if (c < 2)
                {
                    c = 0;
                }
                if (k == 2)
                {
                    continue;
                }
            }
        }
        if (c >= 2 && k >= 2 || c >= 2 && k == 0 || c == 0 && k >= 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}