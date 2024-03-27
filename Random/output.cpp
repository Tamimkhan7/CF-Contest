#include<bits/stdc++.h>


using namespace std;
int main ()
{
    int n,j,sum=0, missing;
    cin>>n;
    for (j=0; j<n-1; j++)
    {
        int a; cin >> a;
        sum = sum+a;
    }
    missing = (n*(n+1))/2;
    cout<<missing - sum<<endl;

    return 0;
}
