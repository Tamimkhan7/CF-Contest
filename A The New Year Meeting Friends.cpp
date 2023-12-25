#include <bits/stdc++.h>
using namespace std;
int main()
{
   int arr[101];
   for(int i=0; i<3; i++){
    cin>>arr[i];
   }
   int maxi = arr[0];
   for(int i=0; i<3; i++){
    if(arr[i]>maxi){
        maxi = arr[i];
    }
   }
   int mini = arr[0];
   for(int i=0; i<3; i++){
    if(mini >arr[i]){
        mini = arr[i];
    }
   }
int res = maxi-mini;
cout<<res<<endl;

}