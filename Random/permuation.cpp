#include <iostream>
using namespace std;
int main ()
{
    int b, i, a;
    cin>>b;
    int arr[b];
    for (i=0; i<b; i++)
    {
         cin>>arr[i];
        cout<<arr[i]<<endl;
//        sort(a.begin(),a.end());
    }

    while(nex_permuation(arr[i].begin(),arr[i].end()))
    {
        cout<<arr[i]<<endl;
    }


    return;
}
