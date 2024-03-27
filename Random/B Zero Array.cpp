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
    int n, k, a;
    cin >> n;
    vector<int> v, v2;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            k = v[j] - v[i];
            v2.push_back(k);
            v = v2;
        }
        n -= 1;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == v[i + 1])
            {
                c++;
            }
        }
    }
    if (c != 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}