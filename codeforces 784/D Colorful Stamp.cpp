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
    string s;
    cin>>s;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='W' && s[i+1]=='W' && s[i+2]=='W')
        {
            cout<<"YES"<<'\n';
            return;
        }
        if(s[i]=='R' && s[i+1]=='B' && s[i+2]=='B')
        {
            cout<<"YES"<<'\n';
            return;
        }
        if(s[i]=='B' && s[i+1]=='R' && s[i+2]=='B')
        {
            cout<<"YES"<<'\n';
            return;
        }
    }
    cout<<"NO"<<'\n';


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
