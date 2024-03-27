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
    int c = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
            c++;
    }
    // cout << c << endl;
    if (c != 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
