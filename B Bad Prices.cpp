#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)cin>>a[i];
    int mini = INT_MAX;
    int ans=0;
    for(int i=n-1; i>=0; i--)
    {
        if(a[i]>mini)
        {
            ans++;
        }
        mini = min(mini,a[i]);
        // cout<<mini<<" ";
    }
    cout<<ans<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
