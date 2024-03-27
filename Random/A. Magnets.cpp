#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s,sum;
    while(t--)
    {
        cin>>s;
        sum += s;
    }
    int c=0,n=0;
    int len = sum.size();
    for(int i=0; i<len; i++)
    {
        if(sum[i] == '0' && sum[i+1] =='0')
        {
            if(sum[i] == sum[i+1])
            {
                c++;
            }
        }

        else if(sum[i] == '1' && sum[i+1] =='1')
        {
            if(sum[i] == sum[i+1])
            {
                n++;
            }
        }
    }

    if(n>=1)
    {
        int res = (n+1)+c;
        cout<<res<<endl;
    }
    else
    {
        int res = n+c;
        cout<<res<<endl;
    }
}
