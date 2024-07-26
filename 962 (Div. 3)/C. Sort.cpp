#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        string a, b;
        cin >> a >> b;

        vector<vector<int>> fre_a(n + 1, vector<int>(26, 0));
        vector<vector<int>> fre_b(n + 1, vector<int>(26, 0));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 26; j++)
            {
                fre_a[i + 1][j] = fre_a[i][j];
                fre_b[i + 1][j] = fre_b[i][j];
            }
            fre_a[i + 1][a[i] - 'a']++;
            fre_b[i + 1][b[i] - 'a']++;
        }

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            l--, r--;

            vector<int> freq_a(26, 0), freq_b(26, 0);

            for (int i = 0; i < 26; i++)
            {
                freq_a[i] = fre_a[r + 1][i] - fre_a[l][i];
                freq_b[i] = fre_b[r + 1][i] - fre_b[l][i];
            }

            int y = 0;

            for (int i = 0; i < 26; i++)
                y += abs(freq_a[i] - freq_b[i]);

            cout << y / 2 << '\n';
        }
    }
    return 0;
}
