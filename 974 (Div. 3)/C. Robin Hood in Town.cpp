#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        long long totalWealth = 0, maxWealth = 0;

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            totalWealth += a[i];
            maxWealth = max(maxWealth, a[i]);
        }

        double halfAverage = (double)totalWealth / n / 2;
        int unhappyCount = 0;

        for (int i = 0; i < n; ++i)
        {
            if (a[i] < halfAverage)
            {
                unhappyCount++;
            }
        }

        if (unhappyCount <= n / 2)
        {
            cout << -1 << endl;
            continue;
        }

        long long x = 0;
        while (true)
        {
            long long newTotal = totalWealth + x;
            long long newMaxWealth = maxWealth + x;
            double newHalfAverage = (double)newTotal / n / 2;
            int newUnhappyCount = 0;

            for (int i = 0; i < n; ++i)
            {
                if (a[i] < newHalfAverage)
                {
                    newUnhappyCount++;
                }
            }

            if (newUnhappyCount > n / 2)
            {
                cout << x << endl;
                break;
            }
            x++;
        }
    }
    return 0;
}
