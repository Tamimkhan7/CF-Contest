#include <bits/stdc++.h>
using namespace std;
#define ll long long
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define nl '\n'
#define mod 1000000007
void solve()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // sort(arr, arr + n);
    vector<ll> v;
    ll sum = 0;
    for (int i = 1; i < n; i++)
    {
        v.push_back(abs(arr[i] - arr[i - 1]));
        // cout << v[i] << endl;
        sum += v.back();
    }
    // cout << sum << endl;
    sort(all(v));
    for (int i = 1; i < m; i++)
    {
        sum -= v.back();
        v.pop_back();
    }
    cout << sum << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}