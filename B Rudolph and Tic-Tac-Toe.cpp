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
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, ss;
        for (int i = 1; i <= 3; i++)
        {
            cin >> s;
            ss += s;
        }
        int sum = 0, sum2 = 0, sum3 = 0, d = 0, c = 0, e = 0;
        for (int i = 0; i < ss.size(); i++)
        {
            if (ss[i] == 'X')
            {
                c++;
            }
            else if (ss[i] == 'O')
            {
                d++;
            }
            else if (ss[i] == '+')
            {
                e++;
            }
        }

        if (c == 3 || d == 3 || e == 3)
        {
            for (int i = 0; i < ss.size(); i++)
            {
                if (ss[i] == 'X')
                {
                    c++;
                }
                else if (ss[i] == 'O')
                {
                    d++;
                }
                else if (ss[i] == '+')
                {
                    e++;
                }
            }
        }
        // cout << c << endl;
        // cout << sum << " " << sum2 << " " << sum3 << endl;
        if (sum == 12 || sum == 15 || sum == 24 || sum == 18)
        {
            cout << "X" << endl;
        }
        else if (sum2 == 12 || sum2 == 15 || sum2 == 24 || sum2 == 18)
        {
            cout << "O" << endl;
        }
        else if (sum3 == 12 || sum3 == 15 || sum3 == 24 || sum3 == 18)
        {
            cout << "+" << endl;
        }
        else
        {
            cout << "DRAW" << endl;
        }
    }
}
