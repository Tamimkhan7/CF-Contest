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
#define vc v.clear()
#define sz v.size()
#define lc (n * 2)
#define rc ((n * 2) + 1)
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int count = 0;
    sort(all(v));
    if (v.size() < 3)
    {
        cout << "Yes" << endl;
        return;
    }
    for (int i = 0, j = 1; i < n - 1, j < n - 1; j++, i++)
    {
        int x = v[i] + v[i + 1];
        int y = v[j] + v[j + 1];
        if (x == y)
        {
            count++;
        }
        else
        {
            int x = v[i] + v[i + 2];
            int y = v[j] + v[j + 1];
            if (x == y)
            {
                count++;
            }
            else
            {
                cout << "No" << endl;
                return;
            }
        }
    }
    if (count)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}