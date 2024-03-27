#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        char s[n],ss;
        string k;
        cin>>s;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n-1; j++)
            {
                if(s[j]>s[j+1])
                {
                    ss = s[j];
                    s[j] = s[j+1];
                    s[j+1] = ss;
                }
                k = s;
            }
            cout<<k<<endl;
        }
        if(s == k)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
