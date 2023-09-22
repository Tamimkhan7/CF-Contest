#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (i < n - 1)
            {
                k = (arr[i + 1] - arr[i]);
                if (k > 1)
                    c++;
            }
        }
        // cout << c << endl;
        if (c == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
