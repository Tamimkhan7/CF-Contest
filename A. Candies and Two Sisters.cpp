#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            if (n == 2)
            {
                int p = n % 2;
                cout << p << endl;
            }
            else
            {
                int e = n / 2;
                int y = e - 1;
                cout << y << endl;
            }
        }
        else
        {
            int w = n / 2;
            cout << w << endl;
        }
    }
}
