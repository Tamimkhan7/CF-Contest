#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, ss, sss;
    cin >> s;
    int len = s.size();
    // cout << len << endl;
    for (int i = 0; i < len; i++)
    {
        if (s[i] != '?')
            ss += s[i];
        else
            ss += s[i + 1];
    }

    for (int i = len - 1; i >= 0; i--)
    {

        sss += ss[i];
        // cout << ss[i];
    }
    if (ss == sss)
        cout << ss << endl;
    else
        cout << -1 << endl;
}