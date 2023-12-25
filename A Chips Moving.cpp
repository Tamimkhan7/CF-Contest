#include <bits/stdc++.h>
using namespace std;
void chips_moving(int n, int a[])
{
    int count_res=0;
    for(int i=1; i<n; i++)
    {
        int ans = a[i]-a[i-1];
        int x = a[i];
        int res = a[i+1]-a[i];
        if((ans==1 || ans==2 && res==1 || res==2 )|| (ans==0 && res==1 || res==2) || (ans==2 || ans==1 && res==0))
        {
            count_res++;
            a[i-1]=x;
            a[i+1]=x;
        }
    }
    cout<<count_res<<endl;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)cin>>a[i];
    sort(a, a+n);
    chips_moving(n, a);
}
//pore try korbo
