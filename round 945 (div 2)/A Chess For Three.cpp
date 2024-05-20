#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    vector<int>v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    int cnt=0;
    sort(v.begin(),v.end());
    while(v[0]>0 and v[1]>0)
    {
        v[0]-=v[1];
        v[1]=0;
        cnt++;
        if(v[0]==0 and v[1]==0 and v[2]==0)
        {
            cout<<cnt<<'\n';
            return ;
        }
        sort(v.begin(),v.end());
    }
    cout<<-1<<'\n';
}
int main()
{
    MTK;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
