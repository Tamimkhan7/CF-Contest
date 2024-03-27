#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int res=0,sum=0;
        int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int maxi = arr[0];  
    for(int i=0; i<n; i++)
    {
        if(maxi<arr[i])
        {
            maxi = arr[i];
        }
    }
    sort(arr, arr+n, greater<int>());    
    for(int i=0; i<n; i++){
      res += maxi-arr[i];    
    }
    cout<<res<<endl;
    
}