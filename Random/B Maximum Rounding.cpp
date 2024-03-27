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
    ll t;
    cin >> t;
    while (t--)
    {
        string s, ss, sss;
        cin >> s;
        int len;
        len = s.size();
        for (ll i = 0; i < len; i++)
        {
            if (s[i] >= 5)
            {
                int k = i;
                for (int j = len - 1; j >= k; j--)
                {
                    ss = s[j];
                    int c = stoi(ss);
                    c = 0;
                    ss = to_string(c);
                    s = ss;
                }
                cout << endl;
            }
        }
    }
    return 0;
}
