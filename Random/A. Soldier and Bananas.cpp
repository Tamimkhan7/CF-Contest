#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w;cin>>k>>n>>w;
    int sum =0;
    for(int i=1; i<=w; i++){
        sum +=i; 
    }
    int res = sum*k;
    int m = res-n;
    if(m<0){
        cout<<'0'<<endl;
    }else{
    cout<<m<<endl;
    }
}