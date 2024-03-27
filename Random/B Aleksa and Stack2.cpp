#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
#define pb push_back
#define pop pop_back()
#define len(a) sizeof(a)
#define lc (n * 2)
#define rc ((n * 2) + 1)
void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    v.pb(2);     // first value assign kore rekhe dilam
    v.pb(3);     // second value assign kore rekhe dilam
    int crt = 4; // third value diye check korteci condition ture hocce kina
    for (int i = 3; i <= n; i++)
    {
        while ((crt * 3) % (v[i - 3] + v[i - 2]) == 0) // condition check, if crt value ager two ta valuer total sum by diviable hoy tahole amake value update korte hobe
        {
            crt++;
        }
        // value update korar por value assign korteci vector ar modde
        v.pb(crt);
        crt++; // assign korar por abar value update korteci
    }
    assert(v.size() == n); // assert diye akta codition check korteci je vector ar value ar amar n ar element same kina tahole logically amar equation thik ace
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";

    cout << endl;
}
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}