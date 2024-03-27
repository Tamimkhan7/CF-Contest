#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t,a,b,sum,result, result2;
    cin>>t;
    for (int i=1; i<=t; i++)
    {
        cin>>a>>b;
        sum = a+b;
        result = sum/4;
        result2 = min(a,b);
    if (result<=result2)
    {
        cout<<result<<endl;
    }
    else
    {
        cout<<result2<<endl;
    }
    }

    return 0;
}
