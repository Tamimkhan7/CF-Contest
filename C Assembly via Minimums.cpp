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
        int m = n;
        n = (n * (n - 1)) / 2;
        int arr[n], arrr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        if (n % 2 == 0)
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (i % 2 == 0)
                    arrr[i] = min(arr[i], arr[i + 1]);
                else
                    arr[i] = max(arr[i], arr[i + 1]);
            }
        }
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (i % 2 == 0)
                    arrr[i] = max(arr[i], arr[i + 1]);
                else
                    arrr[i] = min(arr[i], arr[i + 1]);
            }
        }
        for (int i = 0; i < m; i++)
            cout << arrr[i] << endl;
    }
}