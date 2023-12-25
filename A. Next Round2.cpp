#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a;
    cin>>a;
    int k,m,n;
    cin>>k;
    for (int i=1; i<=a; i++)
    {
        int p[i];
        cin>>p[i];
        m = p[k];
    }
    if (m==0)
    {
        cout<<'0'<<endl;
    }
    else
    {
    n = (m-1);
        cout<<n<<endl;
    }
    return 0;
}
