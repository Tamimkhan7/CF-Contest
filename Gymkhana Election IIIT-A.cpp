#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int k = abs(n - m);
        if (k >= 2)
            cout << k << endl;
        else
            cout << k + 2 << endl;
    }
}