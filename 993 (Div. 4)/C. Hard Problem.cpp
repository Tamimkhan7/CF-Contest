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
        ll m, a, b, c;
        cin >> m >> a >> b >> c;

        ll row1_seated = min(a, m);
        ll row2_seated = min(b, m);

        ll remaining_row1 = m - row1_seated;
        ll remaining_row2 = m - row2_seated;

        ll seated_from_c = min(c, remaining_row1 + remaining_row2);

        ll total_seated = row1_seated + row2_seated + seated_from_c;
        cout << total_seated << endl;
    }
    return 0;
}
