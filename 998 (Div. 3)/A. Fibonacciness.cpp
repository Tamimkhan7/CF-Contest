#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007
int cal(int a1, int a2, int a3, int a4, int a5)
{
    int cnt = 0;
    if (a3 == a1 + a2)
        cnt++;
    if (a4 == a2 + a3)
        cnt++;
    if (a5 == a3 + a4)
        cnt++;
    return cnt;
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        int ans = 0;
        for (int a3 = -200; a3 <= 200; a3++)
            ans = max(ans, cal(a1, a2, a3, a4, a5));

        cout << ans << '\n';
    }
    return 0;
}
