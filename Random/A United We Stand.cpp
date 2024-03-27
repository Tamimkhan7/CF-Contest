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
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        vector<ll> b, c;
        sort(v.begin(), v.end());
        if (v.front() == v.back())
        {
            cout << -1 << endl;
        }
        else
        {
            int c = 0;
            for (int i = 0; i < n; i++)
            {
                // cout << v.front() << " ";
                if (v[i] == v.front())
                {
                    c++;
                }
            }
            cout << c << " " << n - c << endl;
            for (int i = 0; i < c; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
            for (int i = c; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}