#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        vector<int> v;
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            v.push_back(i);
            sum += v[i];
            if (sum == s)
                break;
                
        }
        int m = round(n / 2);
        cout << v[m] << endl;
    }
}