#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n= s.size();
    int x=0,y=0, ans=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='(')x++;
        else if(s[i]==')')y++;
        if(y>0 && x>=y)
        {
            ans +=y;
            x-=y;
            y=0;
        }
        else if(y>x)y=0;
    }
    cout<<ans*2<<'\n';
}
