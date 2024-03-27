#include <bits/stdc++.h>
using namespace std;
void solve(int n)
{
    vector<int> v;
    if (n == 1)
    {
        // v.push_back(n);
        return;
    }
    solve(n - 1);
    v.push_back(n);
    for (int i = 0; i < n; i++)
    {
        // swap(v, v - 1);
        cout << v[i] << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    // int arr[n];

    solve(n);
}