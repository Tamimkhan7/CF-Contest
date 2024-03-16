#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
void solve(){
int n;cin>>n;
if(n>1)
{
cout<<"YES"<<'\n';
for(int i=0; i<n; i++)cout<<'A';
cout<<'\n';
}
else cout<<"NO"<<'\n';
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