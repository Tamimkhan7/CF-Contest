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
    long long n, m, a, k, l;
    cin >> m >> n >> a;
    if (m % a == 0)
    {
        k = m / a;
    }
    else
    {
        k = m / a + 1;
    }
    if (n % a == 0)
    {
        l = n / a;
    }
    else
    {
        l = n / a + 1;
    }
    cout << k * l << endl;
}
// right code