#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        char first = s[0], last = s[2], middle = s[1];
        int a = (first) - '0', b = (last) - '0';
        // cout << a << ' ' << b << '\n';
        // if (middle == '>' and a > b)
        //     cout << s << '\n';
        // else if (middle == '>' and a <= b)
        //     cout << b + 1 << '>' << b << '\n';

        // else if (middle == '<' and a < b)
        //     cout << s << '\n';
        // else if (middle == '<' and a >= b)
        //     cout << a << '<' << a + 1 << '\n';

        // else if (middle == '=' and a == b)
        //     cout << s << '\n';
        // else if (middle == '=' and a > b || a < b)
        // cout << a << '=' << a << '\n';
        if (a > b)
            cout << a << '>' << b << '\n';
        else if (a < b)
            cout << a << '<' << b << '\n';
        else
            cout << a << '=' << b << '\n';
    }
}