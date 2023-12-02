#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s,ss;
    cin>>s;
    int j=0;
    while(s.size()>0)
    {
        if(j==0)
        {
            ss += s[j];
            s.erase(s.begin());
        }
        else
        {
            ss += s[j];
            int flag=0;
            for(int i=0; i<=j; i++)
            {
                if(s[i]==s[j])
                {
                    flag++;
                }
            }
            s.erase(s.begin(), s.begin()+flag);
        }
        j++;

    }
    cout<<ss<<endl;
}
int main()
{
    solve();
}


