#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
void solve(int n, int a[])
{
    int flag = 0, sum = 0;

    for (int i = 0; i < n-1; i++)
    {
        sum += a[i];
        if (a[i] == a[i + 1])
            flag++;
    }
    if (sum == 0)
    {
        cout << 0 << '\n';
        return;
    }
    if (flag == n - 1)
    {
        cout << -1 << '\n';
        return;
    }
    // sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[i + 1])
        {
            cout << i + 2 << '\n';
            return;
        }
    }
}
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        solve(n, a);
    }
}