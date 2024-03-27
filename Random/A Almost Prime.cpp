#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            return false;
            break;
        }
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=2; i<=n; i++)
    {
        if(prime(i))
        {
            v.push_back(i);
        }
    }
    //for(int i=0; i<v.size(); i++)cout<<v[i]<<" ";


    int ans=0;
    for(int i=1; i<=n; i++)
    {
        int flag=0;
        for(int j=0; j<v.size(); j++)
        {
            if(i%v[j]==0 && v[j]<i)
            {
                flag++;
            }
        }

        if(flag==2)
        {
            ans++;
        }

    }
    cout<<ans<<'\n';
}
