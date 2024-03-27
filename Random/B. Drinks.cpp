#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(0)j; cin.tie(0);cout.tie(0);
#define all(x).begin , (x).end()
#define endl "\n"
#define pb push_back
#define lc (n*2)
#define rc (n*2)+1
#define mid (e+b)/2
int main()
{
    float n,sum=0,sum2=0,i,res,a;
    cin>>n;
    for (i=1; i<=n; i++)
    {
        cin>>a;
        sum = sum+a;

    }
    res = sum/n;
    cout<<res<<endl;

    return 0;
}
