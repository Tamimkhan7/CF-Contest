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
    string s, ss, sss;
    cin >> s;
    int c = 0, k = 0, v = 0, a = 0, b = 0;
    string t = "hello";
    int len = s.size();
    for (int i = len - 1; i >= 0; i--)
    {
        if (s[i] == 'l')
        {
            if ((b == 0 || b == 1) && a == 1)
            {
                ss += s[i];
                b++;
            }
        }
        else if (s[i] == 'h')
        {
            if (k == 0 && a == 1 && b == 2 && v == 1)
            {
                ss += s[i];
                k++;
            }
        }
        else if (s[i] == 'e')
        {
            if (v == 0 && a == 1 && b == 2)
            {
                ss += s[i];
                v++;
            }
        }
        else if (s[i] == 'o')
        {
            if (a == 0)
            {
                ss += s[i];
                a++;
            }
        }
    }
    c = 0, k = 0, v = 0, a = 0, b = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'l')
        {
            if (b == 0 || b == 1 && k == 1 && v == 1)
            {
                sss += s[i];
                b++;
            }
        }
        else if (s[i] == 'h')
        {
            if (k == 0)
            {
                sss += s[i];
                k++;
            }
        }
        else if (s[i] == 'e')
        {
            if (v == 0 && k == 1)
            {
                sss += s[i];
                v++;
            }
        }
        else if (s[i] == 'o')
        {
            // cout << a << k << v << b << endl;
            if (a == 0 && k == 1 && v == 1 && b == 2)
            {
                sss += s[i];
                a++;
            }
        }
    }
    int x = 0;
    int len2 = ss.size();
    reverse(ss.begin(), ss.end());
    // cout << sss << " " << ss << endl;
    for (int i = 0; i < len2; i++)
    {
        if (ss[i] == t[i])
            c++;
        if (sss[i] == t[i])
        {
            x++;
        }
    }

    if (c == 5 || x == 5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
