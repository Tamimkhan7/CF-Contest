#include <bits/stdc++.h>
using namespace std;
int main ()
{
    char name[5000];
    string name2;
    //gets(name);
    cin>>name;
    int result = strlen(name);
    for (int i=result-1; i>=0; i--)
    {
        name2 += name[i];
    }
    if (name == name2)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }

    return 0;
}
