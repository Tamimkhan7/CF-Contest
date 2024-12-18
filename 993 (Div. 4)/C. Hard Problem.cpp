#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int long long

int main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        int rw1 = min(m, a);
        int rw2 = min(m, b);
        int rw1_rem = m - rw1;
        int rw2_rem = m - rw2;
        int xx = min(c, rw1_rem + rw2_rem);
        cout << rw1 + rw2 + xx << '\n';
    }
    return 0;
}
