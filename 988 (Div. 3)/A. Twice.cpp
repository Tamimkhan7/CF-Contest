#include <bits/stdc++.h>
using namespace std;
#define MTK                        \
    ios_base::sync_with_st dio(0); \
    cin.tie(0);                    \
    cout.tie(0);

int32_t main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<int> se;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (se.find(x) != se.end())
            {
                ans++;
                se.erase(x);
            }
            else
                se.insert(x);
        }
        cout << ans << '\n';
    }
    return 0;
}
