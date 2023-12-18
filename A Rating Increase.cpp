#include <bits/stdc++.h>
using namespace std;

pair<int, int> findValues(string ab)
{
    for (int i = 1; i < ab.size(); ++i)
    {
        string aStr = ab.substr(0, i);
        string bStr = ab.substr(i);
        if ((aStr[0] != '0' || aStr.size() == 1) && (bStr[0] != '0' || bStr.size() == 1) && stoi(bStr) > stoi(aStr))
        {
            return {stoi(aStr), stoi(bStr)};
        }
    }
    return {-1, -1};
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string ab;
        cin >> ab;

        pair<int, int> re = findValues(ab);
        if (re.first == -1 && re.second == -1)
        {
            cout << "-1\n";
        }
        else
        {
            cout << re.first << " " << re.second << "\n";
        }
    }

    return 0;
}
