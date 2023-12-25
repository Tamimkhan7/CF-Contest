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
    string s;
    cin >> s;
    int l = s.size();
    int c = 0, k = 0;
    if (l < 7)
    {
        cout << "NO" << endl;
    }
    else
    {
        for (int i = 0; i < l; i++)
        {
            if (s[i] == '0')
            {
                c++;
                k = 0;
                if (c == 7)
                {
                    cout << "YES" << endl;
                    break;
                }
            }
            else
            {
                k++;
                c = 0;
                if (k == 7)
                {
                    cout << "YES" << endl;
                    break;
                }
            }
        }
        if (c != 7 && k != 7)
            cout << "NO" << endl;
    }
}
