#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
int main()
{

    vector<ll> v, v2, jv;
    ll k, n, i;
    cin >> k >> n;
    for (i = 1; i <= k; i++)
    {
        if (i % 2 == 0)
        {
            v.push_back(i);
        }
        else
        {
            v2.push_back(i);
        }
    }
    jv.reserve(v.size() + v2.size());
    jv.insert(jv.end(), v2.begin(), v2.end());
    jv.insert(jv.end(), v.begin(), v.end());
    for (i = 0; i < jv.size(); i++)
    {
        cout << jv[n - 1] << endl;
        break;
    }
}
