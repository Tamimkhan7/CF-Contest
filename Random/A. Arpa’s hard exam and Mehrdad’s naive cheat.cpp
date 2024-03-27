#include <bits/stdc++.h>
using namespace std;
int main()
{
     
        int base, n;cin>>n;
        base = 8;
        int res =1;
        while(n != 0){
            if(n%2 != 0){
                res=(res*base)%10;
                n-=1;
            }else{
                base=(base*base)%10;
                n/=2;
            }
        }
            cout<<res<<endl;
    

}