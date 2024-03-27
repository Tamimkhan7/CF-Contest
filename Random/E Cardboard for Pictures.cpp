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
typedef __int128 lll;
typedef unsigned long long int llu;
#define pb push_back
#define pop pop_back()
#define len(a) sizeof(a)
#define lc (n * 2)
#define rc ((n * 2) + 1)
const int MAX = 2e5 + 5;
void solve()
{
    ll n, c, s;
    cin >> n >> c; // take input from user n and c
    cin >> s;
    lll s1 = 0;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        s1 += arr[i] * arr[i];
    }
    lll a, b, p, u, x, y, w;
    a = 4 * n;
    b = 4 * s;
    p = s1 - c;
    u = (b * b) - (4 * a * p);
    // y = 2 * a;
    x = sqrtl(u) + 2;
    while (x * x > u)
    {
        x--;
        lll d1 = -b + x;
        lll d2 = -b - x;
        ll ans = max(d1 / (2 * a), d2 / (2 * a));
        cout << ans << endl;
    }
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
// this problem we use 2nd formula
//  like ax*2+bx+c=0
// then we will write the euqtion x = -b+- root over b*b-4*a*c divided by 2*a