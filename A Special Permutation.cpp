#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=2; i<=n; i+=2)
        {
            cout<<i<<" ";
        }
        if(n%2==1)cout<<n<<" ";
        for(int i=1; i<n; i+=2)
        {
            cout<<i<<" ";
        }
        cout<<endl;

    }
}
