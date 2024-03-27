#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    string s,k;
    for (int i=1; i<=t; i++)
    {
        cin>>s>>k;
        for (int j=0; j<5; j++)
        {
            for (int l=j; l<=j; l++)
            {
                if (s[j] == k[l])
                {
                    cout<<'G';
                }
                else
                {
                    cout<<'B';
                }
            }
        }
        cout<<endl;
    }


    return 0;
}
