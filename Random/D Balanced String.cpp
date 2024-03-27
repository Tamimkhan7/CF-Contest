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
    string s;
    cin >> s;
    int len = s.size();
    int c = 0, k = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '1')
            c++;
        else
            k++;
    }
    int p = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '1' && s[i + 1] == '0' || s[i] == '0' && s[i + 1] == '1')
            p++;
    }
    // cout << p << endl;
    int w = p * 2;
    if (k > c)
        cout << 0 << endl;
    else if (c > k)
        cout << c - k << endl;
    else
        cout << len - w << endl;
    return 0;
}
// baki ta korte hobe