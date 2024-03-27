#include <iostream>
using namespace std;
int main ()
{
    int n, i;
    cin>>n;
    char name[n];
    int arr[n];
    for (i=1; i<=n; i++)
    {
        cin>>name[i] >>arr[i];
    }

    for (i=1; i<=n; i++)
    {
        cout<<name[i]<<" "<<arr[i];
    }

    return 0;
}
