#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int len = s.size();
        int c = 0;
        for (int i = 0; i < len; i++)
        {
            if (s[i] == 'c' || s[i] == 'o' || s[i] == 'd' || s[i] == 'e' || s[i] == 'f' || s[i] == 'r' || s[i] == 's')
                c++;
        }
        if (c != 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}