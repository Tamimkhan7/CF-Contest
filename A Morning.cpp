#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
#define pb push_back
#define pop pop_back()
#define vc v.clear()
#define sz v.size()
#define lc (n * 2)
#define rc ((n * 2) + 1)
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        string s, ss, sx;
        cin >> s;
        int len = s.size();
        int ans = 0, count = 0;
        for (int i = 0; i < len - 1; i++)
        {
            if (s[i] <= s[i + 1])
                count++;
            else
                break;
        }
        if (count == len - 1)
        {
            for (int i = 0; i < len - 1; i++)
            {
                int x = int(s[i]);
                int y = int(s[i + 1]);
                int res = abs(x - y);
                if (res > 1 && x > 0 && y > 0)
                {
                    res++;
                    ans += res;
                }
                else if (x || y == 0)
                {
                    if (x == 0)
                    {
                        x += 10;
                        int res = abs(x - y);
                        ans += res;
                        ans++;
                    }
                    if (y == 0)
                    {
                        y += 10;
                        int res = abs(x - y);
                        ans += res;
                        ans++;
                    }
                }
                else
                {
                    ans += 2;
                }
            }
            ans++;
        }
        else
        {
            for (int i = 0; i < len - 1; i++)
            {
                int x = int(s[i]);
                int y = int(s[i + 1]);
                int res = abs(x - y);
                if (res > 1 && x > 0 && y > 0)
                {
                    ans += res;
                    ans++;
                }
                else if (x == 0 || y == 0)
                {
                    if (x == 0)
                    {
                        x = 10;
                        int res = abs(x - y);
                        ans += res;
                        ans++;
                    }
                    else
                    {
                        cout << x << endl;
                        y = 10;
                        int res = abs(x - y);
                        ans += res;
                        ans++;
                    }
                }
            }
            int p = int(s[len - 1]);
            ans += abs(10 - p);
        }
        cout << ans << endl;
    }
    return 0;
}