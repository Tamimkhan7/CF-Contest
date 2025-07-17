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
        int n, k;
        cin >> n >> k;
        k--; // zero-based indexing

        vector<int> h(n);
        for (auto &x : h)
            cin >> x;

        int maxH = *max_element(h.begin(), h.end());

        if (h[k] == maxH)
        {
            cout << "YES\n";
            continue;
        }

        bool canReach = false;
        for (int i = 0; i < n; i++)
        {
            if (h[i] == maxH)
            {
                int d = abs(h[k] - h[i]);
                int maxStart = min(h[k] - 1, h[i] - d - 1);
                if (maxStart >= 0)
                {
                    canReach = true;
                    break;
                }
            }
        }

        cout << (canReach ? "YES\n" : "NO\n");
    }

    return 0;
}
