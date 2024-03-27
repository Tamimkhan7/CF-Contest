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
    string s, k;
    cin >> s;
    int l = s.size();
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (int i = 0; i < l; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            if (i == 0)
            {
                k += '.';
            }
            else if (i == 1)
            {
            }
            else
            {
                if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                {
                    k += '.';
                }
                else
                {
                    k += s[i];
                }
            }
            cout << k << endl;
        }
        else
        {
            k += s[i];
        }
    }
}
// pore korbo
