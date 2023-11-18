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
int main()
{
    faster;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if((n-1)%3==0 || (n+1)%3==0)cout<<"First"<<'\n';
        else cout<<"Second"<<'\n';
    }
    return 0;
}
