#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int arr[5];
    cin >> t;
    while (t--)
    {
        for (int i = 1; i <= 4; i++)
        {
            cin >> arr[i];
        }
        int maxi, c = 0;
        for (int i = 1; i <= 4; i++)
        {
            maxi = arr[1];
        }
        for (int i = 1; i <= 4; i++)
        {
            if (maxi < arr[i])
            {
                c++;
            }
        }
        cout << c << endl;
    }
}