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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int c = 0, k = 0;

    int p = 0, l = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'x')
        {
            k++;
        }
        else
        {
            if (k > 2)
            {

                k -= 2;
                p += k;
            }
            k = 0;
        }
    }
    if (k > 2 && p != 0)
    {
        k -= 2;
        p += k;
        cout << p << endl;
    }
    else if (p == 0 && k < 3)
    {
        cout << 0 << endl;
    }
    else if (p == 0 && k > 2)
    {
        k -= 2;
        p += k;
        cout << p << endl;
    }
    else
        cout << p << endl;

    return 0;
}