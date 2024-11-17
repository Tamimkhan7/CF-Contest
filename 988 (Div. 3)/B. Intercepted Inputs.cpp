#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define ll long long

void solve()
{
    int k;
    cin >> k;
    vector<int> a(k);
    unordered_map<int, int> freq;

    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }

    sort(all(a));

    for (int i = 0; i < k; i++)
    {
        int n = a[i];
        if (n > k - 2)
            continue;
        if ((k - 2) % n == 0)
        {
            int m = (k - 2) / n;
            if (freq[n] > 0 && freq[m] > 0)
            {
                cout << n << " " << m << '\n';
                return;
            }
        }
    }
}

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
