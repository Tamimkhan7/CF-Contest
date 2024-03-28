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
int B[] = {10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111, 10000, 10001, 10010, 10011, 10100, 10101, 10110, 10111, 11000, 11001, 11010, 11011, 11100, 11101, 11110, 11111, 100000};
bool solve()
{
    int n;
    cin >> n;
    for (int i = 30; i >= 0; i--)
    {
        if (n >= B[i] && n % B[i] == 0)
        {
            while (n % B[i] == 0)
            {
                n /= B[i];
                // cout << B[i] << ' ' << n << '\n';
            }
        }
    }
    return n == 1;
}
int main()
{
    MTK;
    int tc;
    cin >> tc;
    while (tc--)
        cout << (solve() ? "YES" : "NO") << endl;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// #define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
// #define MTK                       \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// typedef long long int ll;
// #define all(x) x.begin(), x.end()
// #define mod 1000000007
// void solve()
// {
//     int n;
//     cin >> n;
//     string s = to_string(n);
//     int cnt = 0;
//     for (auto x : s)
//     {
//         if (x == '1' || x == '0')
//             cnt++;
//     }

//     if (cnt == s.size())
//     {
//         cout << "YES" << '\n';
//         return;
//     }
//     while (1)
//     {
//         if (n % 10 == 0)
//             n /= 10;
//         else if (n % 11 == 0)
//             n /= 11;
//         else
//             break;
//         s = to_string(n);
//         cnt = 0;
//         for (auto x : s)
//         {
//             if (x == '1' || x == '0')
//                 cnt++;
//         }
//         if (cnt == s.size())
//         {
//             cout << "YES" << '\n';
//             return;
//         }
//     }

//     cout << "NO" << '\n';
// }
// int32_t main()
// {
//     MTK;
//     int t;
//     cin >> t;
//     while (t--)
//         solve();
// }