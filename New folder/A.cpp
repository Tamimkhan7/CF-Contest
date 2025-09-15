#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long m;
        cin >> n >> m;

        vector<long long> a(n), b(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i] >> b[i];

        long long prev_time = 0, prev_side = 0;
        long long points = 0;

        for (int i = 0; i < n; ++i)
        {
            long long dt = a[i] - prev_time; // time difference
            long long side_diff = abs(b[i] - prev_side);

            // Maximum moves possible is dt, minimum required is side_diff
            long long extra = dt - side_diff;
            // We can earn points every 2 extra moves
            points += (extra / 2) + side_diff;

            prev_time = a[i];
            prev_side = b[i];
        }

        cout << points << "\n";
    }
}
