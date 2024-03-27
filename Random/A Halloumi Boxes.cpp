#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin>>n>>k;
    vector<int>a(n),s(n);

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        s[i]  = a[i];
    }


    if(is_sorted(a.begin(), a.end()))
    {
        cout<<"YES"<<'\n';
        return;
    }
    if(k==1)
    {
        cout<<"NO"<<'\n';
        return;
    }
    reverse(s.begin(), s.end());
    if(is_sorted(s.begin(), s.end()))
    {
        cout<<"YES"<<'\n';
        return;
    }

    for(int i=0; i<n; i++)cout<<a[i]<<" ";
    cout<<endl;
    int ans=0,x,y;
    for(int i=0; i<n-1; i++)
    {
        if(a[i]>a[i+1])
        {
            x = i;
            y = i+1;
            ans++;
            if(ans==k)
            {
                reverse(a.begin()+x, a.begin()+y);
                ans=0;
                i++;
            }
        }
        else
        {
            if(ans<=k)
            {
                cout<<x<<" "<<y<<endl;
                reverse(a.begin()+x, a.begin()+y);

                ans=0;
                i++;
            }
        }
    }

    if(is_sorted(a.begin(), a.end()))
    {
        cout<<"YES"<<'\n';
    }
    else
    {
        cout<<"NO"<<'\n';
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();

}
