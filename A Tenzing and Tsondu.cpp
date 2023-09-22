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
void print()
{
    long long int n, m;
    cin >> n >> m;
    long long int arr[n], arr2[m];
    long long int sum = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int j = 0; j < m; j++)
        cin >> arr2[j];

    for (int i = 0; i < n; i++)
        sum += arr[i];
    for (int i = 0; i < m; i++)
        sum2 += arr2[i];

    if (sum == sum2)
        cout << "Draw" << endl;
    else if (sum > sum2)
        cout << "Tsondu" << endl;
    else
        cout << "Tenzing" << endl;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        print();
    }
}
