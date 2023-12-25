#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t,sum=0;
    cin>>t;
    int p[t],c=0;
    for (int i=1; i<=t; i++)
    {
        cin>>p[i];
        if (p[i] < 100)
        {
            cout<<p[i]<<endl;
            sum = sum + p[i];
            int k = sum;
            cout<<sum<<endl;
        }
        else if (p[i]>=100)
        {
            int result = sizeof(p)/sizeof (p[i]);//kaj kore na
            cout<<result<<endl;//same
            cout<<p[i]<<endl;//same
            for (int j=0; p[j] != '\0'; j++)//same
            {
                c++;//same
            }
        }
    }
    return 0;
}
