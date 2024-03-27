#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int c = 0;
    int r;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] > 0 && arr[i] >= arr[k])
        {
            c++;
        }
    }
    cout << c << endl;
}