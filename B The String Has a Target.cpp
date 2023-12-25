#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
#define pb push_back
#define pop pop_back()
#define len(a) sizeof(a)
#define lc (n * 2)
#define rc ((n * 2) + 1)
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, p;
        cin >> s;
        int maxi = s[0] - 'a';
        int c = -1;
        for (int i = 1; i < n; i++)
        {
            int l = s[i] - 'a';
            if (maxi >= l)
            {
                maxi = l;
                c = i;
            }
        }
        if (c > 0)
        {
            // cout << c << endl;
            // p = s[c];
            cout << s[c];
            for (int i = c - 1; i >= 0; i--)
            {
                s[i + 1] = s[i];
            }
            for (int i = n - 1; i > c; i--)
            {
                s[i] = s[i];
            }
            for (int i = 1; i < n; i++)
            {
                cout << s[i];
            }
            cout << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}