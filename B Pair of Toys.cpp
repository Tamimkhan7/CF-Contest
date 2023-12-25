#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n, k;
    cin>>n>>k;
    ll xx = min(n,k);
    ll counte=0;
    for(ll i=1; i<=xx; i++)
    {
        for(ll j=1; j<=xx; j++)
        {
            if(i != j)
            {
                ll ans =i+j;
                if(ans==k)counte++;
            }
        }
    }
    cout<<counte/2<<'\n';

    return 0;
}
