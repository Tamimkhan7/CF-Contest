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
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (i % 2 != 0)
            cout << "I hate that ";
        else
            cout << "I love that ";
    }
    if (n % 2 != 0)
        cout << "I hate it ";
    else
        cout << "I love it ";
    cout << endl;
}