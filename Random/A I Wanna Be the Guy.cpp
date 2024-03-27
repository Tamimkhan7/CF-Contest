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
    int p, q, n;
    cin >> n;
    cin >> p;
    int arr[250];
    int c = 0;
    for (int i = 0; i < p; i++)
    {
        cin >> arr[i];
    }
    cin >> q;
    for (int j = p; j < p + q; j++)
    {
        cin >> arr[j];
    }
    sort(arr, arr + (p + q));
    for (int i = 0; i < p + q; i++)
    {
        if (arr[i] != arr[i + 1])
            c++;
    }
    if (c == n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;
}
