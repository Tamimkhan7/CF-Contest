#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)cin>>a[i];
    sort(a, a+n+1);
    int ans=0;
    for(int i=0; i<n; i+=2)
    {
        ans += abs(a[i]-a[i+1]);
    }
    cout<<ans<<'\n';

}
int main()
{
    solve();
}


