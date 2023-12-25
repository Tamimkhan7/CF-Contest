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
    vector<int> v(n), I;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    reverse(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        I.push_back(v[i]);
        for (int j = i + 1; j < n; j++)
        {
            int k = v[j];
            if (v[i] == v[j])
            {
                v.erase(v[j]);
            }
        }
    }
    cout << I.size() << endl;

    return 0;
}