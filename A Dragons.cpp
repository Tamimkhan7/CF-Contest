#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, n, c = 0;
    cin >> s >> n;
    int m = n;
    while (n--)
    {

        int x, y;
        cin >> x >> y;
        if (s > x)
        {
            s += y;
            c++;
        }
    }
    // cout << c << endl;
    // cout << n << endl;
    if (c == m)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}