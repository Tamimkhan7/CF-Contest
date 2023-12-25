#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<char> s;
    cin >> s;
    int len = s.size();
    cout << len << endl;
    for (int i = 0; i < len; i++)
        cout << s[i] << endl;
    // int c = 0;
    // for (int i = 0; i < len; i++)
    // {
    //     if (s[i] != s[i + 1])
    //         c++;
    // }
    // cout << c << endl;
}