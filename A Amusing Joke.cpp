#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, ss, sss;
    for (int i = 0; i < 2; i++)
    {
        cin >> s;
        sss += s;
    }
    sort(sss.begin(), sss.end());
    // cout << sss << endl;
    int len = sss.size();
    string p;
    cin >> p;
    sort(p.begin(), p.end());
    // cout << p << endl;
    int len2 = p.size();
    int c = 0;
    for (int i = 0; i < len; i++)
    {
        if (sss[i] == p[i])
            c++;
    }
    if (len > len2)
    {
        if (len == c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
    {
        if (len2 == c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}