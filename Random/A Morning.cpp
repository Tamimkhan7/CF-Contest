#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
void solve(){
    string s;cin>>s;
    int a= s[0]-'0';
    int ans=0;
    for(int i=1; i<s.size(); i++){
        int b = s[i]-'0';       
        if(b==0)b=10;
        if(a==0)a=10;
        cout<<a<<" "<<b<<'\n';
        ans += (abs(b-a))+1;
        cout << ans << '\n';
        a = b;
    }
    cout<<ans+1<<'\n';
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