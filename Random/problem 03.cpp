#include <iostream>
using namespace std;
int main ()
{
    long long int n, i;
    cin>>n;
    cout<<n<<" ";
    for (i=n; i>=1; i++)
    {
    if (n==1)
            break;
        if (n%2==0)
        {
            n = (n/2);
        }
        else
        {
            n= (n*3)+1;
        }

        cout<<n<<" ";

    }

    return 0;
}
