#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
void solve()
{
    int n,q;
    cin>>n>>q;
    int a[n+1],b[q+1];
    for(int i=1; i<=n; i++)cin>>a[i];
    for(int i=1; i<=q; i++)cin>>b[i];

    for(int i=1; i<=q; i++)
    {
        ll ans = pow(2, b[i]);
        ll res = pow(2, b[i]-1);
        for(int j=1; j<=n; j++)
        {
            if(a[j]%ans==0&&a[j]>=ans)
            {
                a[j]+=res;
            }
        }
    }
    for(int i=1; i<=n; i++)cout<<a[i]<<" ";
    cout<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
