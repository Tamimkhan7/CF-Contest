#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1; i<=n; i++)cin>>a[i];
    if(a[1]!= a[2] && a[2]== a[3])
    {
        cout<<1<<'\n';
        return;
    }
    for(int i=1; i<n; i++)
    {
        if(a[i]!=a[i+1])
        {
            cout<<i+1<<'\n';
            return;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}


