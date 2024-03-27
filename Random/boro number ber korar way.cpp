#include <iostream>
using namespace std;
int main ()
{
    int i, n, temp, j;
    cin>>n;
    int arr[n];
    for (i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    for (i=1; i<=n; i++)
    {
        for (j=i+1; j<=n; j++)
        {
            if (arr[i]<arr[j])
            {
                temp= arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

        cout<<arr[2]<<" ";



    return 0;
}
