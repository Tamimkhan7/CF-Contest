#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int ans=0;
        for(int i=1; i<=n; i++)
        {
            int flag=0;
            for(int j=1; j<=m; j++)
            {
                if((j+1)<=m and (j-1)>0)flag++;
                if((i+1)<=n and (i-1)>0)flag++;

            }
            cout<<flag<<'\n';
            if(flag>=1) ans++;
        }
        cout<<ans<<'\n';
    }

}

