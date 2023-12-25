#include <bits/stddc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int maxi = a[0];
        int c = 0;
        for (int i = 1; i <= n; i++)
        {
            if (maxi < a[i + 1])
                c++;
        }
        cout << c << endl;
    }
}