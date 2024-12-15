#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int long long

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_map<int, int> fre, freq;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            fre[a[i]]++;
        }
        priority_queue<int> q;
        for (int i = n; i >= 1; i--)
        {
            if (fre[i] == 0)
                q.push(i);
        }
        // while (!q.empty())
        // {
        //     cout << q.top() << ' ';
        //     q.pop();
        // }
        for (int i = 0; i < n; i++)
        {
            if (freq[a[i]] == 0)
            {
                cout << a[i] << ' ';
                freq[a[i]]++;
            }
            else
            {
                cout << q.top() << ' ';
                q.pop();
            }
        }
        cout << '\n';
    }
    return 0;
}
