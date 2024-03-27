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
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int c = 0, k = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] < v[i + 1])
                k++;
        }
        if (k == n - 1)
        {
            cout << 0 << endl;
        }
        else
        {
            while (1)
            {
                int p = *min_element(v.begin(), v.end());
                int k = *max_element(v.begin(), v.end());
                int maxi = v[0], mini = v[0];
                for (int i = 0; i < n; i++)
                {
                    if (maxi < v[i])
                    {
                        maxi = v[i];
                        p = i;
                    }
                }
                v.erase(v.begin());
                v.erase(v.end()); 
                v.insert(v.begin(), p);
                v.insert(v.end(), k);
                v.begin()++;
                v.end()--;
                c++;
                if (n / 2 == c)
                    break;
            }
            cout << c << endl;
        }
    }
    return 0;
}