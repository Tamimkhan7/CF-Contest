#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    vector<int> pref(n + 1, 0);
    for (int i = 1; i <= n; i++)
        pref[i] = pref[i - 1] + a[i];

    for (int l = 1; l < n; l++)
    {
        for (int r = l + 1; r < n; r++)
        {
            int s1 = (pref[l]) % 3;
            int s2 = (pref[r] - pref[l]) % 3;
            int s3 = (pref[n] - pref[r]) % 3;

            if (s1 < 0)
                s1 += 3;
            if (s2 < 0)
                s2 += 3;
            if (s3 < 0)
                s3 += 3;

            if ((s1 == s2 and s2 == s3) || (s1 != s2 and s2 != s3 and s1 != s3))
            {
                cout << l << " " << r << "\n";
                return;
            }
        }
    }
    cout << 0 << " " << 0 << "\n";
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
