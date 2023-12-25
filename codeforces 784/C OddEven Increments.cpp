#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1; i<=n; i++)cin>>a[i];
    int ans=0,even_ans=0,odd_ans=0,even_element=0, odd_element=0,even2_element=0, odd2_element=0;
    for(int i=1; i<=n; i++)
    {
        if(a[i]%2==0)even_ans++;
        if(a[i]%2 !=0)odd_ans++;
        if(i%2==1 && a[i]%2==1)odd_element++;
        if(i%2==0 && a[i]%2==0)even_element++;

        if(i%2==1 && a[i]%2==0)even2_element++;
        if(i%2==0 && a[i]%2==1)odd2_element++;
    }
    int x = n/2;
    if(even_ans==n || odd_ans==n)cout<<"YES"<<'\n';
    else if(n%2==0)
    {
        if((x==even_element && x==odd_element)|| (x==even2_element && x==odd2_element))cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    else if(n%2==1)
    {
        if((x==even_element && (x+1)==odd_element) || ((x+1)==even2_element && x==odd2_element))cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    else cout<<"NO"<<'\n';

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
