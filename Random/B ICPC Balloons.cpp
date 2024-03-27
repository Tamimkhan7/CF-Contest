#include <bits/stdc++.h>
using namespace std;
void solve(int n, string s)
{
    sort(s.begin(), s.end());
    // cout << s << endl;
    int c = 0, k = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1])
            c++;
        else
            k++;
    }
    if (c > 0)
    {
        cout << c + k * 2 << endl;
    }
    else
    {
        cout << c * 2 + k * 2 << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        solve(n, s);
    }
}