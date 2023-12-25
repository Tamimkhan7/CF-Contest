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
void solve(vector<string> v)
{
    int ans = 0;
    string x, y;
    for (int i = 0; i < v.size(); i += 2)
    {
        for (int j = i + 1; j < v.size(); j += 2)
        {
            x = v[i];
            y = v[j];
            if (x.size() > 1 && y.size() > 1)
            {
                sort(x.begin(), x.end());
                sort(y.begin(), y.end());
                // cout << x << " " << y << endl;
                if (x == y)
                    ans++;
                if (ans > 0)
                    break;
            }
            x.clear();
            y.clear();
        }
    }
    if (ans > 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    faster;
    string s, sb;
    cin >> s;
    int len = s.size();
    vector<string> v;
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            for (int k = i; k <= j; k++)
            {
                sb += s[k];
            }
            v.pb(sb);
            sb.clear();
        }
    }
    solve(v);

    return 0;
}