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
// const int N = 1e5 + 9;
// vector<int> v;
// void val()
// {
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(4);
//     v.push_back(10);
//     for (int i = 0; i < N; i++)
//     {
//         int x = v.back();
//         x *= 2;
//         if (x < N)
//             v.push_back(x);
//         else
//             break;
//     }
// }
int32_t main()
{
    MTK;
    // val();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // if (n == 1)
        //     cout << 1 << '\n';
        // else if (4 >= n)
        //     cout << 2 << '\n';
        // else
        // {
        //     int ans = 0;
        //     for (int i = 0; i < (int)v.size(); i++)
        //     {
        //         if (n > v[i])
        //             continue;
        //         else
        //         {
        //             ans = i;
        //             break;
        //         }
        //     }
        //     cout << ans << '\n';
        // }
        int cur = 1, cnt = 1;
        while (cur < n)
        {
            cur = 2 * (cur + 1);
            cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}