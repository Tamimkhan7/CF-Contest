#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
        b.push_back(a);
    }
    sort(b.begin(), b.end(), greater<int>());

    for (int i = 0; i < n; i++)
    {
        if (v[i] == b[0])
            cout << v[i] - b[1] << " ";
        else
            cout << v[i] - b[0] << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}