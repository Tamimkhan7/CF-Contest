#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

int main()
{
    Faster;
    string s;
    cin >> s;
    int len = s.size();
    int c = 0, k = 0, l = 0, n = 0;
    for (int i = 0; i < len; i++)
    {

        if (s[i] >= 'a' && s[i] <= 'z')
        {
            c++;
        }
        else if (s[0] >= 'a' && s[0] <= 'z')
        {
            l++;
        }
        else if (s[1] >= 'A' && s[len - 1] <= 'Z')
        {
            n++;
        }
    }
    // cout << c << endl;
    // cout << l << endl;
    // cout << n << endl;
    if (c == 1 && l == 1 && n == len - 1)
    {
        cout << "Caps" << endl;
    }
    else
    {
        cout << s << endl;
    }
}