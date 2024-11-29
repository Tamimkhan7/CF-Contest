#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

const int N = 1e4 + 9;
string s[N];
bool vis[N][N], ok = false;
int di[] = {0, -1, 0, 1};
int dj[] = {1, 0, -1, 0};
char dir[] = {'R', 'U', 'L', 'D'};
int n, m, ans;
pair<int, int> parent[N][N];

bool is_valid(int i, int j)
{
    return i >= 0 and i < n and j >= 0 and j < m;
}

void bfs(int i, int j)
{
    queue<pair<int, int>> q;
    q.push({i, j});
    vis[i][j] = true;
    parent[i][j] = {-1, -1};
    while (!q.empty())
    {
        ans++;
        auto [u, v] = q.front();
        q.pop();
        for (int k = 0; k < 4; k++)
        {
            int next_i = di[k] + u;
            int next_j = dj[k] + v;
            if (is_valid(next_i, next_j) and s[next_i][next_j] == 'T')
            {
                ok = true;          
                cout << ans << '\n';
                return;
            }

            if (is_valid(next_i, next_j) and s[next_i][next_j] == '.' and !vis[next_i][next_j])
            {
                q.push({next_i, next_j});
                vis[next_i][next_j] = true;
                parent[next_i][next_j] = {u, v};
            }
        }
    }
}
int32_t main()
{
    MTK;

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> s[i];
    int st_i, st_j;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == 'S')
            {
                st_i = i, st_j = j;
            }
        }
    }
    ans = 0;
    bfs(st_i, st_j);
    if (!ok)
        cout << -1 << '\n';

    return 0;
}
