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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int c = 0;
    int p = *min_element(v.begin(), v.end());
    if (p > 1)
    {
        cout << 1 << endl;
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            int k = v[i + 1] - v[i];
            if (k > 1)
            {
                c++;
                cout << v[i] + 1 << endl;
                break;
            }
        }
        if (c == 0)
            cout << v.back() + 1 << endl;
    }
}