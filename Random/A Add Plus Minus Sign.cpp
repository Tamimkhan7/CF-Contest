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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, k, p;
        cin >> s;
        int sum, x;
        k = s[0];
        sum = stoi(k);
        // cout << sum << endl;
        for (int i = 1; i < n; i++)
        {
            p = s[i];
            x = stoi(p);
            sum += x;
            if (sum > 1)
            {
                sum -= 2;
                cout << "-";
            }
            else
            {
                cout << "+";
            }
        }
        cout << endl;
    }
}
