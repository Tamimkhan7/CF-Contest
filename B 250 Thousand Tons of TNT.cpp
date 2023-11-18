#include<bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
#define pb push_back
#define pop pop_back()
#define vc v.clear()
#define sz v.size()
#define lc (n*2)
#define rc ((n*2)+1)
void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);
     for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    if(n==1){
        cout<<0<<endl;
        return;
    }
    int maxi=-1, mini = 1e9+50;
    for(int i=0; i<n; i++)
    {
        maxi = max(a[i], maxi);
        mini = min(a[i], mini);

    }
    cout<<maxi<<" "<<mini<<endl;
    cout<<maxi-mini<<'\n';
}
int main()
{
    faster;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
