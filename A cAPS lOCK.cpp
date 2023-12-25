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
    string s;
    cin >> s;
    int len = s.size();
    int c = 0, k = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            c++;
        }
        if (s[0] >= 'a' && s[0] <= 'z')
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                k++;
        }
    }
    // cout << len << endl;
    string ss;
    if (c == len)
    {
        for (int i = 0; i < len; i++)
        {
            ss += s[i] + 32;
        }
        cout << ss << endl;
    }
    else if (k == len - 1)
    {
        for (int i = 0; i < len; i++)
        {
            if (i == 0)
                ss += s[0] - 32;
            else
                ss += s[i] + 32;
        }
        cout << ss << endl;
    }
    else
    {
        cout << s << endl;
    }
}
