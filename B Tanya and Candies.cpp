#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int sum = 0, sum2 = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 2 == 0)
    //         sum += arr[i];
    //     else
    //         sum2 += arr[i];
    // }
    int c = 0, k;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            k = v[i];
            v.erase(k);
            for (int i = 1; i < n; i++)
            {
                if (i % 2 == 0)
                    sum += v[i];
                else
                    sum2 += v[i];
            }
        }
        // else
        // {
        //     v[i].pop();
        //     if (i % 2 == 0)
        //         sum += v[i];
        //     else
        //         sum2 += v[i];
        // }
        // // cout << sum << endl
        // //      << sum2 << endl;
        // if (sum == sum2)
        // {
        //     c++;
        // }
        // sum = 0;
        // sum2 = 0;
    }
    cout << c << endl;
}