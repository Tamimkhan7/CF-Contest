#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v, ans;
        for (int i = 1; i <= 225; i++)
            v.push_back(i * i);

        // for (auto x : v)
        //     cout << x << ' ';
        // cout << '\n';
        // ll x = 1, val = 0, i = 1, j = n - 1, temp = n;
        // bool ok = false;
        // while (i <= j)
        // {
        //     //  show(i), show(j);
        //     if (find(all(v), (val + j)) == v.end())
        //     {
        //         val += j;
        //         ans.push_back(j);
        //         j--;
        //     }
        //     else if (find(all(v), (val + i)) == v.end())
        //     {
        //         val += i;
        //         ans.push_back(i);
        //         i++;
        //     }
        //     else
        //     {
        //         ans.push_back(temp);
        //         val += temp;
        //         temp = j;
        //         j--;
        //     }
        //     // show(val);
        // }

        // ans.push_back(temp);
        // bool flag = false;

        // if (flag)
        //     cout << "-1" << '\n';
        // else
        // {
        //     for (auto x : ans)
        //         cout << x << ' ';
        //     cout << '\n';
        // }
        for (int i = 1; i <= n; i++)
            ans.push_back(i);

        ll pre_sum = 0, val = 0;
        bool ok = true;
        for (int i = 0; i < (int)ans.size() - 1; i++)
        {
            if (find(all(v), (val + ans[i])) != v.end())
            {
                swap(ans[i], ans[i + 1]);
                if (find(all(v), (val + ans[i])) != v.end())
                {
                    ok = false;
                    break;
                }
            }
            val += ans[i];
            // show(val);
        }
        int x = ans.back();
        // show(x);
        if (find(all(v), (val + x)) != v.end())
            ok = false;

        if (!ok)
            cout << "-1" << '\n';
        else
        {
            for (auto x : ans)
                cout << x << ' ';
            cout << '\n';
        }
    }
    return 0;
}