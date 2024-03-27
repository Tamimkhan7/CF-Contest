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

int32_t main()
{

    faster;
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        bool flag = true;
        vector<pair<int, int>> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].first >> arr[i].second;
        }
        for (int i = 1; i < n; i++)
        {
            if ((arr[0].second <= arr[i].second && arr[0].first <= arr[i].first) || arr[0].first == 1)
                flag = false;
        }

        if (flag)
            cout << arr[0].first - 1 << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}