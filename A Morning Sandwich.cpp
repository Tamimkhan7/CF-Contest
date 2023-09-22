#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int b, c, h;
        cin >> b >> c >> h;
        if (b > c && b > h)
        {
            int k = c + h;
            cout << (k * 2) + 1 << endl;
        }
        else
        {
            cout << (b * 2) - 1 << endl;
        }
    }
}