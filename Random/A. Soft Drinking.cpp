//answer aktu wrong ace pore dekhbo
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
   int m = k*l;
   int o = m/nl;
   int w = c*d;
   int r = p/np;
   //cout<<o<<endl<<w<<endl<<r<<endl;
int z;
    z = min({o,w,r})/n;
    
     cout<<z<<endl;
   }