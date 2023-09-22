#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define nl '\n'
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        string s, ss, xx;
        cin >> n;
        int sum, k, kk, sum2, sm, k2;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            cin >> s;
            for (int i = 0; i < 2; i++)
            {
                if (s[i] == '1' && s[i + 1] == '0' || s[i] == '0' && s[i + 1] == '1')
                {
                    if (s[i] == '1' && s[i + 1] == '0')
                    {
                        sm = x;
                        if (kk < sm)
                            continue;
                        else
                            kk = sm;
                    }
                    else
                    {
                        continue;
                    }
                }
                else if (s[i] == '0' && s[i + 1] == '1')
                {
                    sum2 = x;
                    if (k2 < sum2)
                        continue;
                    else
                        k2 = sum2;
                }
                else
                {
                    continue;
                }
            }
            if (s[i] == '1' && s[i + 1] == '1')
            {
                if (s[i] == '1' && s[i + 1] == '1')
                {
                    sum = x;
                    if (k < sum)
                        continue;
                    else
                        k = sum;
                }
                else
                {
                    continue;
                }
            }
        }
        // cout << kk + k2 << endl;
        cout << sum << endl;
    }
}
