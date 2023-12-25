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
    string s, ss, sb;
    cin >> s;
    llu res;
    ss = s;
    int len = s.size();
    for (int i = 0; i < len; i++)
    {
        s.erase(s.begin() + i);
        res = stoi(s);
        if (res % 8 == 0)
        {
            cout << "YES" << endl;
            cout << s << endl;
            return 0;
        }
        s = ss;
    }
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            s.erase(i, j);
            res = stoi(s);
            if (res % 8 == 0)
            {
                cout << "YES" << endl;
                cout << s << endl;
                return 0;
            }
            s = ss;
        }
    }
    cout << "NO" << endl;

    return 0;
}