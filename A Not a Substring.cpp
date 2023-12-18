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
    string s, t1, t2;
    cin >> s;
    int len = s.size();
    if (len == 1 || (len == 2 && s == "()"))
    {
        cout << "NO" << endl;
        return;
    }
    for (int i = 0; i < len * 2; i++)
    {
        if (i % 2 == 0)
        {
            t1.push_back('(');
        }
        else
        {
            t1.push_back(')');
        }
        if (i < len)
        {
             
            t2.push_back('(');
        }
        else
        {
            t2.push_back(')');
        }
    }
    cout << "YES" << endl;
    if (t1.find(s) == string::npos)
        cout << t1 << endl;
    else
        cout << t2 << endl;
}
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}