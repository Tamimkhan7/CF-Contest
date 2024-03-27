#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t,k,l;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%3 !=0)
        {
            k = n/3;
            l = k+1;
            if(k*1+l*2==n)
            {
                cout<<k<<" "<<l<<endl;
            }
            else
            {
                cout<<l<<" "<<k<<endl;
            }
        }
        else
        {
            k = n/3;
            cout<<k<<" "<<k<<endl;
        }
    }

}
