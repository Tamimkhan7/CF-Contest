#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int64_t

int main()
{
    MTK;
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> freq(n + 1, 0);
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            freq[x]++;
        }

        int res = 0;
        for (int i = 1; i <= n; ++i)
        {
            if (i < k - i && k - i <= n)
            {
                int pairs = min(freq[i], freq[k - i]);
                res += pairs;
                freq[i] -= pairs;
                freq[k - i] -= pairs;
            }
            else if (i == k - i)
            {
                res += freq[i] / 2;
                freq[i] %= 2;
            }
        }

        cout << res << "\n";
    }

    return 0;
}
