#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, i, c = 0;
    cin >> a;
    string s;
    cin >> s;

    for (i = 0; i < a; i++)
    {
        s[i] = towlower(s[i]);
    }
    sort(s.begin(), s.end());
    for (i = 0; i < a; i++)
    {
        if (s[i] != s[i + 1])
        {
            c++;
        }
    }
    if (c == 26)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}