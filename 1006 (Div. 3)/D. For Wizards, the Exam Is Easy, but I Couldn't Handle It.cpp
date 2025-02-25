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

int cnt_inv(vector<int> &a)
{
    int n = a.size();
    vector<int> tree(n + 1, 0);
    int inv = 0;

    vector<int> b = a;
    sort(all(b));
    b.erase(unique(all(b)), b.end());

    for (int i = n - 1; i >= 0; --i)
    {
        int x = lower_bound(all(b), a[i]) - b.begin() + 1;
        for (int j = x - 1; j > 0; j -= j & -j)
            inv += tree[j];
        for (int j = x; j <= n; j += j & -j)
            tree[j]++;
    }

    return inv;
}

pair<int, int> res(vector<int> &a)
{
    int n = a.size();
    int tot_inv = cnt_inv(a);
    int min_inv = tot_inv;
    pair<int, int> best_shi = {1, 1};

    for (int l = 0; l < n; ++l)
    {
        int sm = 0, lr = 0;
        for (int r = l; r < n; ++r)
        {
            if (a[r] < a[l])
                sm++;
            if (a[r] > a[l])
                lr++;

            int ch = lr - sm;
            int curr_inv = tot_inv + ch;

            if (curr_inv < min_inv)
            {
                min_inv = curr_inv;
                best_shi = {l + 1, r + 1};
            }
        }
    }

    return best_shi;
}

int main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &num : a)
            cin >> num;

        pair<int, int> ans = res(a);
        cout << ans.first << " " << ans.second << '\n';
    }
    return 0;
}