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

ll call(vector<int> a, int k, int mxln) {
    if (k < 0) return 0;
    int n = a.size();
    unordered_map<int,int> freq;
    int dis = 0,l = 0;
    ll res = 0;
    for (int r = 0; r < n; r++) {
        if (++freq[a[r]] == 1) dis++;
        while (dis > k) {
            if (--freq[a[l]] == 0) dis--;
            l++;
        }
       
        while (r - l + 1 > mxln) {
            if (--freq[a[l]] == 0) dis--;
            l++;
        }
        res += (r - l + 1);
    }
    return res;
}

int32_t main() {
    MTK;

    int t; cin >> t;
    while (t--) {
        int n, k, l, r; cin >> n >> k >> l >> r;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        ll ans = (call(a, k, r) - call(a, k, l-1))- (call(a, k-1, r) - call(a, k-1, l-1));
        cout << ans << "\n";
    }
    return 0;
}
