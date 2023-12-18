#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int m = 0, x = 1;
    while (x <= n)
    {
        x = pow(2, m);
        if (a[x] > a[x + 1])
        {
            int y = abs(a[x] - a[x + 1]);
            for (int i = x; i >= 1; i--)
            {
                if (a[i] >= y)
                {
                    a[i] -= y;
                }
            }
        }
    }
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
