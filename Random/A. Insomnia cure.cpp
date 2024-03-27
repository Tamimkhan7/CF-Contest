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
    long long int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;

    int res = l+k+m+n;
    int res2 = res+l;
    cout<<res2<<endl;

    return 0;
}
