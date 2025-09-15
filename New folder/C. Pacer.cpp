#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    ll m;
    cin >> n >> m;
    vector<pair<ll, int>> req(n);
    for (int i = 0; i < n; i++)
    {
        cin >> req[i].first >> req[i].second;
    }

    ll points = 0;
    ll prev_time = 0;
    int prev_side = 0;

    for (int i = 0; i < n; i++)
    {
        ll dt = req[i].first - prev_time;
        int side_diff = abs(req[i].second - prev_side);

        ll extra_moves = max(0LL, dt - side_diff);
        points += side_diff + extra_moves;

        prev_time = req[i].first;
        prev_side = req[i].second;
    }

    points += m - prev_time;

    cout << points << "\n";
}

int main()
{

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
