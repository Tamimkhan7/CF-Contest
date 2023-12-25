#include <bits/stdc++.h>
using namespace std;
int main(){
int t;cin>>t;
while(t--){
    int n;cin>>n;
    int a[n];
    for(int i=0; i<n;i++)cin>>a[i];
    int maxi=-1, mini = 1e9+7;
    for(int i=0; i<n;i++){
        maxi = max(a[i], maxi);
        mini = min(a[i], mini);
    }
    cout<<maxi-mini<<endl;

}
}
