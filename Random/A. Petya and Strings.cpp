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
    string s, ss, n, nn;
    cin >> s >> ss;
    int len = s.size();
    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            n += s[i] + 32;
        }
        else
        {
            n += s[i];
        }
    }
    for (int i = 0; i < len; i++)
    {
        if (ss[i] >= 'A' && ss[i] <= 'Z')
        {
            nn += ss[i] + 32;
        }
        else
        {
            nn += ss[i];
        }
    }
    int c = 0, k = 0;
    for (int i = 0; i < len; i++)
    {
        if (n[i] > nn[i])
        {
            c++;
            break;
        }
        else if (n[i] < nn[i])
        {
            k++;
            break;
        }
        else
        {
            continue;
        }
    }
    if (c == k)
        cout << 0 << endl;
    else if (c < k)
        cout << -1 << endl;
    else
        cout << 1 << endl;
}