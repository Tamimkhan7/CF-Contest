#include <iostream>
using namespace std;
int main ()
{
    long long int N;
    cin>>N;
    if (N%100 ==0)
    {
        int result = N/100;
        cout<<result<<endl;
    }
    else
    {
        int result = (N/100)+1;
        cout<<result<<endl;
    }

    return 0;
}
