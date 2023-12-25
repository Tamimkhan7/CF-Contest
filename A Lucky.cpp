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
    string s, ss;
    cin >> s;
    int sum = 0, sum2 = 0;
    for (int i = 0; i < 3; i++)
    {
        ss = (s[i]);
        sum += stoi(ss);
    }
    for (int i = 3; i < 6; i++)
    {
        ss = s[i];
        sum2 += stoi(ss);
    }
    if (sum == sum2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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