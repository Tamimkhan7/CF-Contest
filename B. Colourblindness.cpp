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
        string s,ss;
        cin>>s>>ss;
        int c=0, k=0;
        if(n==1)
        {
            for(int i=0; i<1; i++)
            {
                if( s[i] == 'G')
                    c++;
            }
            for(int i=0; i<1; i++)
            {
                if( ss[i] == 'G' || ss[i] == 'B')
                    k++;
            }
        }
        else
        {
            for(int i=0; i<1; i++)
            {
                //cout<<s[i+1]<<endl;
                if( s[i+1] == 'G')
                    c++;
            }
            for(int i=0; i<1; i++)
            {
                //cout<<ss[i+1]<<endl;
                if( ss[i+1] == 'G' || ss[i+1] == 'B')
                    k++;
            }
            //cout<<k<<endl<<c<<endl;
        }

        if(k==c && k !=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
