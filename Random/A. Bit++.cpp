#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, x=0, i;
    cin >> n;

    string s;
    for  (i=0; i<n; i++)
    {
        cin >> s;
        if (s[1] == '+')
        {
            ++x;
        }
        else
        {
            --x;
        }
    }

    cout << x << endl;
    return 0;
}
