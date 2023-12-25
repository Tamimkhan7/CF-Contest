#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;cin>>t;
    long long int p,q,l,k;
    while(t--){
        long long int a,b;cin>>a>>b;
        if(a==b){
            cout<<'0'<<endl;
        }else{
             k = abs(a-b);
            if(k%10==0){
             p = k/10;
            cout<<p<<endl;
            }else{               
                q = k/10;
                l = q+1;
                cout<<l<<endl;
            }
        }
    }
}