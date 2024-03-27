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
    int t;
    cin >> t;
    while (t--)
    {
        string s, ss;
        cin >> s >> ss;
        vector<int> v;
        int len = s.size();
        int len2 = ss.size();
        for (int i = 0; i < len2; i++)
        {
            for (int j = 0; j < len; j++)
            {
                if (ss[i] == s[j])
                {
                    j++;
                    v.push_back(j);
                }
            }
        }
        int c = 0;
        for (int i = 0; i < v.size() - 1; i++)
        {
            c += abs(v[i] - v[i + 1]);
        }
        cout << c;
        cout << endl;
    }
    return 0;
}