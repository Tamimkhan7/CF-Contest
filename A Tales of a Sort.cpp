#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int ans = 0;
        int n;
        cin >> n;
        int arr[n];
        for (int i = 1; i <= n; i++)
            cin >> arr[i];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > arr[i + 1])
                ans = max(ans, arr[i]);
        }
        cout << ans << endl;
    }
}