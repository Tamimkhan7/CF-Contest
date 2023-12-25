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
        int n;
        cin >> n;
        int ss;
        cin >> ss;
        string s;
        cin >> s;
        string k;
        for (int i = 0; i < n; i++)
        {
            if (s[i] > ss)
            {
                k += s[i];
            }
            else if (s[i] <= ss)
            {
                k += ss;
            }
            else
            {
                k += s[i];
            }
        }
        cout << k << endl;
    }
}
// pore korbo, answer wrong
