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
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        // v.push_back(c);
        int k = c - a;
        int p = b - c;
        if (a == b || b == c || a == c)
        {
            cout << -1 << endl;
        }
        else
        {
            sort(v.begin(), v.end());
            cout << v[0] << " ";

            for (int i = 1; i < c - 1; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
            cout << v[c - 1] << endl;
        }
    }
    return 0;
}