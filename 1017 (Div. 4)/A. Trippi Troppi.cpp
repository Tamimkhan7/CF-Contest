#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int long long

int32_t main()
{
    MTK;
    int n;
    cin >> n;
    while (n--)
    {
        for (int i = 0; i < 3; i++)
        {
            string s;
            cin >> s;
            cout << s[0];
        }
        cout << '\n';
    }
    return 0;
}