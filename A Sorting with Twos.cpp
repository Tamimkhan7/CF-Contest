#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] < a[i + 1])
            count++;
    }
    if (count == n - 1)
    {
        cout << "YES";
        // return;
        }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            int y = abs(a[i] - a[i + 1]);
            for (int j = i; j >= 0; j--)
            {
                a[j] -= y;
            }
        }
    }
    count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] < a[i + 1])
            count++;
    }
    if (count == n - 1)
    {
        cout << "YES";
        return;
    }
    else
    {
        cout << "NO";
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}