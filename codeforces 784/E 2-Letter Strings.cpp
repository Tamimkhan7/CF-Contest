#include<bits/stdc++.h>
using namespace std;
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
void solve()
{
    int n;
    cin>>n;
    string s,ss;
    while(n--)
    {
        cin>>s;
        ss+=s;
    }
    int ans=0;

    for(int i=0; i<n*2; i+=2)
    {
        int flag=0;
        for(int j=i+2; j<n*2; j+=2)
        {

            if(s[i]==s[j] || s[i]==s[j+1] || s[i+1]==s[j]|| s[i+1]==s[j+1])
            {
                flag++;
            }
        }
        if(flag>0)ans++;
    }
    cout<<ans<<'\n';

}
int main()
{
    faster;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
