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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int maxi = arr[0];
        int mini = arr[0];
        for (int i = 0; i < n; i++)
        {
            if (maxi < arr[i])
            {
                maxi = arr[i];
            }
            else if (mini > arr[i])
            {
                mini = arr[i];
            }
        }
        int res = maxi - mini;
        res *= 2;
        cout << res << endl;
    }
}