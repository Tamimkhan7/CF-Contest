#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n, i, j, temp;
    n = 3;
    int arr[500];
    for (i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for (i=0; i<n-1; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

     if (arr[2]-arr[1] == arr[1]-arr[0])
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }

    return 0;
}

