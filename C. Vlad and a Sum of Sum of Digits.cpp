#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007
const int N = 2e5 + 9;
int prx[N];
int digitSum(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int32_t main()
{
    MTK;
    int t;
    prx[1] = 1;
    for (int i = 2; i <= N; i++)
    {
        int x = i;
        x = digitSum(x);
        prx[i] = prx[i - 1] + x;
    }
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << prx[n] << '\n';
    }
}