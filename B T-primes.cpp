#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007
#define pb push_back
#define pop pop_back()
bool is_prime(ll n)
{
    int flag = 0;
    if (n == 4)
        return true;
    if (n < 100)
    {
        for (ll i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                flag++;
            }
            if (flag > 3)
            {
                return false;
            }
        }
    }
    else if (n >= 100 and n % 2 != 0)
    {
        for (ll i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                flag++;
            }
            if (flag > 3)
            {
                return false;
            }
        }
    }

    if (flag == 3 || (flag == 2 and n > 100))
        return true;
    else
        return false;
}
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
    {
        ll x = a[i];
        // cout << x << '\n';
        if (is_prime(x))
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
}