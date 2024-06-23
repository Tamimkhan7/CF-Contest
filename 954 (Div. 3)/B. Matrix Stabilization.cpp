#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

bool isValid(int x, int y, int n, int m)
{
    return x >= 0 && x < n && y >= 0 && y < m;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    priority_queue<pair<int, pair<int, int>>> pq;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            pq.push({a[i][j], {i, j}});
        }
    }

    while (!pq.empty())
    {
        auto current = pq.top();
        pq.pop();
        int value = current.first;
        int x = current.second.first;
        int y = current.second.second;

        bool isPeak = true;
        for (int k = 0; k < 4; k++)
        {
            int nx = x + dx[k];
            int ny = y + dy[k];
            if (isValid(nx, ny, n, m) && a[x][y] <= a[nx][ny])
            {
                isPeak = false;
                break;
            }
        }

        if (isPeak)
        {
            a[x][y]--;
            pq.push({a[x][y], {x, y}});
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
}

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
