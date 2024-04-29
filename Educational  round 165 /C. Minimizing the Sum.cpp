#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    while (k--)
    {
        int mn = *min_element(all(v));
        auto a = find(all(v), mn);
        int idx = distance(v.begin(), a);
        if (idx - 1 >= 0 && idx + 1 < n)
        {
            if (v[idx + 1] > v[idx - 1])
                v[idx + 1] = mn;
            else
                v[idx - 1] = mn;
        }
        else if (idx - 1 >= 0)
        {
            v[idx - 1] = mn;
        }
        else if (idx + 1 < n)
        {
            v[idx + 1] = mn;
        }
    }

    for (int i = 0; i < n; i++)
        cout << v[i] << ' ';
    cout << '\n';
}

int main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
