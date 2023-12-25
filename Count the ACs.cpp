#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a;
    while(t--)
    {
        cin>>a;
        if(a<=10)
        {
            cout<<a<<endl;
        }
        else
        {
            if(a%100 !=0)
            {
                int m = a%100;
                cout<<m+1<<endl;

            }
            else
            {
                int k = a/100;
                cout<<k<<endl;
            }
        }

    }
}
