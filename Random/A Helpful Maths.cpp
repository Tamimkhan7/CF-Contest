#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<string> ss;
    int c = 1;
    sort(s.begin(), s.end());
    int len = s.size();
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '+')
        {
            continue;
        }
        else if (i == len-1)
        {
            cout << s[i];
            break;
        }
        else
        {
            cout << s[i] << "+";
        }
    }
}