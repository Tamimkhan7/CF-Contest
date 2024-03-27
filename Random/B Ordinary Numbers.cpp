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
        ll n, count = 0, start;
        cin >> n;
        for (int i = 1; i <= 9; i++)
        {
            start = i;
            while (start <= n)
            {
                count++;
                start = start * 10 + i;
            }
        }
        cout << count << endl;
    }
}
