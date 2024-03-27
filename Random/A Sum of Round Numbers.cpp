#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    if(n%10==0)
    {
        cout<<1<<endl<<n<<endl;
        return;
    }
    vector<string>v;
    string s;
    int res,ans=0;
    while(n>0)
    {
        if(n%10)
        {
            ans++;
            res = n%10;
            s = to_string(res);
            for(int i=1; i<ans; i++)s+="0";
            v.push_back(s);
            n/=10;
        }
        else
        {
         //   cout<<n<<" ";
            ans++;
            s = to_string(n);
             for(int i=1; i<ans; i++)s+="0";
            v.push_back(s);
            break;
        }
    }
    cout<<ans<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
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
