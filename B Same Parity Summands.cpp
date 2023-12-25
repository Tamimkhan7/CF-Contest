#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>v;
    if(k>n || (n%2 !=0 && k%2==0) || ((((n/2)+1)<=k) && k%2!=0 && n%2==0))
    {
        cout<<"NO"<<endl;
        return;
    }
    else if(n%2==0 && k%2==0 || n%2!=0 && k%2!=0 || n%2==0 && k%2!=0)
    {
        cout<<"YES"<<endl;
        if(n%2==0 && k%2==0)
        {
            for(int i=0; i<k; i++)cout<<n/k<<" ";

        }
        else
        {
            //  int x = n;
            int flag=0,even=0, odd=0;
            while(n>0)
            {
                flag++;
                if(flag==k)
                {
                    cout<<n<<'\n';
                    return;
                }
                int x = (n/k+n%k);
                if(x%2==0)even++;
                else odd++;
                if(even){
                odd=0;
                }
                cout<<x<<" ";
                n-= x;
            }
        }
        cout<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
        return;
    }
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
