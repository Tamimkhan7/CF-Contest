#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m, k;
    cin >> n;
    int c = 0;
    while (n > 2)
    {
        if (n % 2 != 0)
        {
            c++;
            break;
        }
        n = n / 2;
    }
    if (c == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}