#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n, d=0;
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int sum = a+b+c;
        if (sum>1)
        {
            d++;
        }
    }
    cout<<d<<endl;


    return 0;
}
