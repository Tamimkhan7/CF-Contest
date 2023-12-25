#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v, v1;
        int sum = 0, sum2 = 0, c = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                sum += i;
                v.push_back(i);
                cout << v.back() << " ";
            }
        }
        cout << sum << endl;

        // int k = sum;
        // k /= 2;
        // k += 1;
        for (int i = 1; i <= sum; i++)
        {
            if (i % 2 != 0)
            {
                sum2 += i;
                v1.push_back(i);
                if (sum == sum2)
                {
                    break;
                }
                else if (sum < sum2)
                {
                    break;
                }
                int k = sum2
                    sum2 -= i;
                v1.pop_back();
            }
        }
    }
}
