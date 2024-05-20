#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int N = 1e2 + 9;
int d[N];

int main()
{
    ll res = 0;
    for (int i = 1; i < N; i++)
        res += i;
    cout << res << '\n';
    for (int i = 1; i < N; ++i)
    {
        for (int j = i; j < N; j += i)
        {
            d[j]++;
        }
    }
    ll sum = 0;
    for (int i = 1; i < N; i++)
    {
        // cout << i << ' ' << d[i] << '\n';
        sum += d[i] * i;
    }
    cout << sum << '\n';
}