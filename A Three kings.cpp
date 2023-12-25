#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, x, y, z;
    cin >> a >> b >> c >> x >> y >> z;
    int res, res2, res3;
    res = a + x;
    res2 = b + y;
    res3 = c + z;
    if (res > x && res2 > x && res3 > x)
    {
        cout << "Barley Hops Malt ";
    }
    else if (res2 > x && res3 > x)
    {
        cout << "Hops Malt";
    }
    else if (res3 > x && res > x)
    {
        cout << "Barley Malt ";
    }
    else if (res > x && res2 > x)
    {
        cout << "Barley Hops ";
    }
    cout << endl;
}