#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define all(x) x.begin(), x.end()
#define mod 1000000007
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
      int x = (b % 3) + c;
      if(b%3 !=0){
          int p =b- (b % 3);
      }
    if (x % 3 == 0)
    {
        ans += a;
        ans += b / 3;
        ans += x / 3;
        cout << ans << '\n';
    }
    else
        cout << -1 << '\n';
}
int32_t main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
        solve();
}