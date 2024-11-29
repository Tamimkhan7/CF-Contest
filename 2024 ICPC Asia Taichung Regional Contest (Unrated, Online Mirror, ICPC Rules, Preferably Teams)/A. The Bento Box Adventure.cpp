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

int32_t main()
{
    MTK;
    int sum = 0;
    for (int i = 1; i <= 4; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }

    cout << 15 - sum << '\n';
    return 0;
}