#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0, sum2 = 0, sum3 = 0;
    while (n--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        sum += x;
        sum2 += y;
        sum3 += z;
    }
    if (sum == 0 && sum2 == 0 && sum3 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}