#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,s;
    cin>>n>>s;
    int ct=0;
    /*while(s>n)
    {
        ct++;
        s-=n;
    }*/
    //int ans = s/n;
    // int mod = s-(ans*n);
    //if(mod>=1)ans++;
    int ans = (s+n-1)/n;//using ceil function
    cout<<ans<<endl;
}
