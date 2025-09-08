#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, x;
        cin >> k >> x;
        int C = 1 << k;
        int V = 1 << k;
        vector<int> ops;

        int target = x;
        while (C != target)
        {
            if (C < target)
            {

                int give = V / 2;
                C += give;
                V -= give;
                ops.push_back(2);
            }
            else
            {

                int give = C / 2;
                C -= give;
                V += give;
                ops.push_back(1);
            }
        }

        cout << ops.size() << "\n";
        for (int o : ops)
            cout << o << " ";
        cout << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
