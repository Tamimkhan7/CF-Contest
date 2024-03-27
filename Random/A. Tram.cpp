#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0;
    cin>>n;
    int a[n],b[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
    }
    int sum = 0;
    int maxi = 0;
    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            sum = b[i] - a[i];
            if(maxi <= sum)
            {
                maxi = sum;
            }

        }
        else
        {
            sum = (sum-a[i])+b[i];
            //cout<<sum<<endl;
            if(maxi <= sum)
            {
                maxi = sum;
            }
        }
    }
    cout<<maxi<<endl;
}
