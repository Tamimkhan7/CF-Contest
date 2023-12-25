#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=4,k,l,p;
    int arr[n];
    for(int i=0; i<n;  i++){
        cin>>arr[i];
    }
    sort(arr, arr+n, greater<int>());
    if(arr[0] % 2 ==0){
     k = arr[0]/3;
      cout<<k<<endl;
    }else{
        p = arr[0]-1;
        k = p/2;
        l = abs(arr[0]-p);
        cout<<l<<endl;
        cout<<k<<endl;
    }

    for(int i=1; i<n; i++){
        if(arr[i]%2==0){
            k = arr[i]/2;
            cout<<k<<endl;
        }else{
            k = arr[i]/2;
            cout<<k<<endl;
            p = arr[i]%2;
            cout<<P<<endl;
        }
    }
    
}