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
#define len(a) sizeof(a)
#define lc (n * 2)
#define rc ((n * 2) + 1)
void solve()
{
    vector<int> v(3);
    for (int i = 0; i < 3; i++)
        cin >> v[i];

    int ans = 0;
    for (int i = 0; i < 2; i++)
    {
        if (v[i] == v[i + 1])
            ans++;
    }
    if (ans == 2)
    {
        cout << "YES" << endl;
        return;
    }
    sort(v.begin(), v.end());
    int mini = v[0];
    int middle = v[1];
    int maxi = v[2];
    if (middle == mini)
    {
        int n = 3;
        while (n--)
        {
            v.clear();
            if (maxi != mini)
                maxi -= mini;
            if (middle != mini)
                middle -= mini;

            // cout << maxi << " " << middle << " " << mini << " ";
            v.pb(maxi);
            v.pb(middle);
            v.pb(mini);
            ans = 0;
            for (int i = 0; i < 3; i++)
            {
                // cout << v[i] << " ";
                if (v[i] == v[i + 1])
                    ans++;
            }
            // cout << endl;
            if (ans == 2)
            {
                break;
            }
        }
    }
    else
    {
        int n = 2;
        while (n--)
        {
            v.clear();
            if (maxi != mini)
                maxi -= mini;
            if (middle != mini)
                middle -= mini;

            // cout << maxi << " " << middle << " " << mini << " ";
            v.pb(maxi);
            v.pb(middle);
            v.pb(mini);
            ans = 0;
            for (int i = 0; i < 3; i++)
            {
                // cout << v[i] << " ";
                if (v[i] == v[i + 1])
                    ans++;
            }
            // cout << endl;
            if (ans == 2)
            {
                break;
            }
        }
    }
    if (ans == 2)

        cout << "YES" << endl;

    else
        cout << "NO" << endl;
}
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}