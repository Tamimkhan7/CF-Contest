#include <bits/stdc++.h>
using namespace std;
const int N = 105;
int a[N];
int main()
{
    string s;
    cin>>s;
    int n = s.size();
    int digit =0;
    for(int i=0; i<n; i+=2)
    {
        a[digit] = s[i]-'0';
        digit++;
    }
    sort(a, a+digit);
    for(int i=0; i<digit; i++)
    {
        cout<<a[i];
        if(i<digit-1)cout<<"+";
    }
    cout<<endl;
}
