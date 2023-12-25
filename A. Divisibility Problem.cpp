#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,res;cin>>t;
    while(t--){
        int a,b;cin>>a>>b;
        if(a<b){
            res = abs(a-b);
            cout<<res<<endl;
        }else if(a%b==0){
            res = 0;
            cout<<res<<endl;
        }else if(a%b != 0){
            res = a%b;
            res = b-res;
            cout<<res<<endl;
        }
    }
}