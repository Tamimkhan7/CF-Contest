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
    int n;
    cin >> n;
    while (n--)
    {
        string s, ss;
        cin >> s;
        int len = s.size();
        for (int i = 0; i < len; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                ss += s[i] - 32;
            }
            else
            {
                ss += s[i];
            }
        }
        // cout << ss << endl;
        int c = 0;
        for (int i = 0; i < len; i++)
        {
            if (ss[i] == 'Y' && ss[i + 1] == 'E' && ss[i + 2] == 'S')
                c++;
        }
        if (c != 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
