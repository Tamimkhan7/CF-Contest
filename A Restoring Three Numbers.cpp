#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
        cin >> arr[i];
    sort(arr, arr + 4);
    int k = arr[0] % 2;
    int p = arr[0] - k;
    int q = arr[1] - p;
    cout << k << " " << p << " " << q << endl;
}