#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int c = 0;
    while (n > 0)
    {
        if (n >= 100)
        {
            n = n - 100;
            c++;
        }
        else if (n >= 20)
        {
            c++;
            n -= 20;
        }
        else if (n >= 10)
        {
            n -= 10;
            c++;
        }
        else if (n >= 5)
        {
            n -= 5;
            c++;
        }
        else
        {
            n -= 1;
            c++;
        }
    }
    cout << c << endl;
}