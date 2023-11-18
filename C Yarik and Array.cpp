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
const int N = 2e5+5;
int pre_arr[N];
void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }


    vector<int>v;

    for(int i=0; i<n; i++)
    {

        if(a[i]%2==0 && a[i+1]%2==0 && (a[i]>=0 && a[i+1]>=0))
        {
            int x = max(a[i], a[i+1]);
            v.push_back(x);
            i++;
        }
        else if(a[i]%2==1 && a[i+1]%2==1&& (a[i]>=0 && a[i+1]>=0))
        {
            int x = max(a[i], a[i+1]);
            v.push_back(x);
            i++;
        }
        else
        {
            v.push_back(a[i]);
        }
    }
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    for(int i=1; i<v.size(); i++)
    {
       v[i] = v[i]+v[i-1];
    }


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
