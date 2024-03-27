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
    string s, ss;
    cin >> s >> ss;
    int len = s.size();
    int c = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '0' && ss[i] == '0')
            cout << '0';
        else if (s[i] != ss[i])
            cout << '1';
        else
            cout << '0';
    }

    cout << endl;
}
