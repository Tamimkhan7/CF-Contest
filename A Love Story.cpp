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
        string s;
        cin >> s;
        int len, c = 0;
        len = s.size();
        for (int i = 0; i < len; i++)
        {
            if (i == 0)
            {
                if (s[i] == 'c')
                {
                    c++;
                }
            }
            if (i == 1)
            {
                if (s[i] == 'o')
                {
                    c++;
                }
            }
            if (i == 2)
            {
                if (s[i] == 'd')
                {
                    c++;
                }
            }
            if (i == 3)
            {
                if (s[i] == 'e')
                {
                    c++;
                }
            }
            if (i == 4)
            {
                if (s[i] == 'f')
                {
                    c++;
                }
            }
            if (i == 5)
            {
                if (s[i] == 'o')
                {
                    c++;
                }
            }
            if (i == 6)
            {
                if (s[i] == 'r')
                {
                    c++;
                }
            }
            if (i == 7)
            {
                if (s[i] == 'c')
                {
                    c++;
                }
            }
            if (i == 8)
            {
                if (s[i] == 'e')
                {
                    c++;
                }
            }
            if (i == 9)
            {
                if (s[i] == 's')
                {
                    c++;
                }
            }
        }
        cout << len - c << endl;
    }
}