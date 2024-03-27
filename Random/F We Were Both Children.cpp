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
void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll ct[n + 1]{}; // that means all the array element are zero which is the means {}
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] <= n)
            ct[arr[i]]++;
        // cout << ct[i] << " ";
    }
    // cout << endl;
    // cout << sizeof(ct) / sizeof(ll) << endl;
    ll f[n + 1]{};
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            f[j] += ct[i];
        }
    }
    cout << *max_element(f, f + n + 1) << endl;
    // sort(arr, arr + n);
    // // vector<int> v;
    // // for (int value : arr)
    // // {
    // //     if (find(v.begin(), v.end(), value) == v.end()) // that is unique vector formula
    // //     {
    // //         v.push_back(value);
    // //     }

    // // for (int i = 0; i < v.size(); i++)
    // // {
    // //     cout << v[i] << " ";
    // // }
    // // cout << endl;
    // int c = 0, k = -1;
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (arr[i] % arr[j] == 0)
    //         {
    //             c++;
    //         }
    //     }
    //     if (c > k)
    //     {
    //         k = c;
    //     }
    //     c = 0;
    // }
    // if (k > 1)
    //     cout << k << endl;
    // else
    //     cout << 0 << endl;
}
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
// we use another formula like math ,
// try to better understand from another person