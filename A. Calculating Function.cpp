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
    long long int n,sum=0,sum2=0,i,res;
    cin>>n;
    for (i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            sum = sum+i;
        }
        else
        {
            sum2 = sum2+i;
        }

    }
    res = sum-sum2;
    cout<<res<<endl;

return 0;
}
