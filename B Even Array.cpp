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
    int t, k, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<ll> v;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            k = arr[i] % 2;
            cout << k << endl;
            v.push_back(k);
            cout << v[i] << " ";
        }
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % i == 0)
            {
                c++;
            }
        }
        if (c == 0)
            cout << -1 << endl;
        else
            cout << c << endl;
    }
    return 0;
}
