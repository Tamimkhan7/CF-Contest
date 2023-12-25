#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,k,q;
    cin>>a>>b;
    if(a>b)
    {
        k = a-b;
        q = k/2;
        cout<<b<<" "<<q<<endl;
    }
    else if(b>=a)
    {
        k = b-a;
        q = k/2;
        cout<<a<<" "<<q<<endl;
    }


}
