#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define all(x) x.begin(), x.end()
bool check(string s)
{
    string ss = s;
    reverse(s.begin(), s.end());
    if (ss == s)
        return true;
    else
        return false;
}
bool fre(string s)
{
    map<char, int> mp;
    for (auto x : s)
        mp[x]++;
    vector<int> v;
    for (auto [x, y] : mp)
        v.push_back(y);
    int cnt = 0, cp = 0;
    // for(auto x: v)
    //     cout << x << ' ';
    // cout << '\n';
    for (int i = 0; i < (v.size()) - 1; i++)
    {
        if (v[i] != v[i + 1])
            cnt++;
            if(v[i]>1)
                cp++;
    }
    if ((v.size() == 2)){
        sort(all(v));
        if((v[0]==1 and v[1]==2) || v[0]==v[1])
            return true;
            else return false;
    }
        if ((cnt == 1 || cnt == 0) and (cp == (v.size() - 1)))
            return true;
        else
            return false;
}
void solve()
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    int x = n - k;
    for (int i = 0; i < x; i++)
    {
        string ss;
        for (int j = i; j < x + i; j++)        
            ss += s[j];     
         if ((((check(ss)) == true) || ((fre(ss)) == true)))
        {
            cout << "YES" << '\n';
            return;
        }
    }
    cout << "NO" << '\n';
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