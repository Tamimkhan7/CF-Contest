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
void solve()
{
    int n, m;
    cin >> n >> m;
    string s, ss, h, p, r;
    while (n--)
    {
        cin >> s;
        ss += s;
    }
    int len = ss.size();
    int a = 0, b = 0, c = 0, d = 0, f = 0;
    for (int i = 0; i < len; i++)
    {
        if (ss[i] == 'v' || ss[i] == 'i' || ss[i] == 'k' || ss[i] == 'a')
            h += ss[i];
    }
    set<string> sp;

    for (int i = 0; i < h.size(); i++)
    {
        r = h[i];
        sp.insert(r);
    }
    cout << sp.size() << endl;

    // for (int i = 0; i < len; i++)
    // {
    //     if (ss[i] == 'v')
    //     {
    //         if (a == 0 && b == 0 && c == 0 && d == 0)
    //         {
    //             p += ss[i];
    //             a++;
    //         }
    //     }
    //     else if (ss[i] == 'i')
    //     {
    //         if (b == 0 && a == 1 && c == 0 && d == 0)
    //         {
    //             p += ss[i];
    //             b++;
    //         }
    //     }
    //     else if (ss[i] == 'k')
    //     {
    //         cout << a << b << c << d << endl;
    //         if (c == 0 && a == 1 && b == 1 && d == 0)
    //         {
    //             p += ss[i];
    //             c++;
    //         }
    //         else
    //         {
    //             break;
    //         }
    //     }
    //     else if (ss[i] == 'a')
    //     {
    //         if (d == 0 && a == 1 && b == 1 && c == 1)
    //         {
    //             p += ss[i];
    //             d++;
    //         }
    //     }
    // }
    // cout << p << endl;
    // int c = 0;

    // for (int i = 0; i < 1; i++)
    // {
    //     if (sss[i] != sss[i + 1] && sss[i] != sss[i + 2] && sss[i] != sss[i + 3] && sss[i + 1] != sss[i + 2] && sss[i + 1] != sss[i + 3] && sss[i + 2] != sss[i + 3])
    //     {
    //         c++;
    //         break;
    //     }
    // }
    // if (c == 1)
    //     cout << "YES" << endl;
    // else
    //     cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}