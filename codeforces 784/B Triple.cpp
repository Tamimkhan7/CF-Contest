#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)cin>>a[i];
    int ans=0;
    sort(a, a+n);
    for(int i=0; i<n-1; i++)
    {
        if(a[i]==a[i+1])
        {
            ans++;
            if(ans==2)
            {
                cout<<a[i]<<'\n';
                return;
            }
        }
        else
        {
            ans=0;
        }
    }
    cout<<-1<<'\n';
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
