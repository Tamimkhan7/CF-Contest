#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
int main()
{
    faster;
    int t, p, q;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        q = n;
        if (n % 2020 == 0 || n % 2021 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            int c = 0, k = 0;
            while (n >= 2020)
            {
                if (n % 2020 == 0)
                {
                    k++;
                    n -= 2020;
                }
                else
                {
                    c++;
                    n -= 2021;
                }
            }
            p = k * 2020 + c * 2021;
            if (p == q)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
            // p -= q;
        }
    }
}