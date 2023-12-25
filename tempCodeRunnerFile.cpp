#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int k,res;
    if(n<100){
        if(n%2==0){
         res = ceil(n/3);
        // cout<<res<<endl;
         k = n-res;
        cout<<res<<" "<<k<<endl;
        }else{
            if(n%3 ==0){                
               res = ceil(n/3);
         k = n-(res+1);
        cout<<res+1<<" "<<k<<endl;
            }else {
                res = n/3;
                  k = n-(res+1);
               cout<<res+1<<" "<<k<<endl;
            }
        }
    }else{
        res = n/2;
        cout<<res<<" "<<res<<endl;
    }
}