#include <iostream>
using namespace std;
int main ()
{
    int N, i, j, c=1;
    cin>>N;
    int arr[1000];
    for (i=1; i<=N; i++)
    {
        cin>>arr[i];
    }
    for (i=1; i<N; i++)
    {
        if (arr[i]<=arr[i+1])
    {

    }else {
        c++;
    }
    }
    if (c==1){
         cout<<"Yes"<<endl;

    }
    else
    {
        cout<<"No"<<endl;
    }


    return 0;
}
