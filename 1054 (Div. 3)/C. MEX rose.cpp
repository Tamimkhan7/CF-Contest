#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007

int32_t main()
{
    MTK;

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }

        int doub = 0, miss = 0;

        for (int i = 0; i <= k; i++)
        {
            if (i != k and mp[i] == 0)            
                miss++;            
         else if(i==k)doub += mp[i];
            // else if (i != k and mp[i] > 1)            
            //     doub += mp[i] - 1;
        }

        cout<<max(doub,miss)<<'\n';
    }
    return 0;
}
