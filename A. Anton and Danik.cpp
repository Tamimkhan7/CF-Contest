#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s,sum;
    cin>>s;
    int c=0,k=0;
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'A')
        {
            c++;
        }
        else if(s[i] == 'D')
        {
            k++;
        }
    }
    if(k==c)
    {
        cout<<"Friendship"<<endl;
    }
    else if(c>k)
    {
        cout<<"Anton"<<endl;
    }
    else
    {
        cout<<"Danik"<<endl;
    }
}
