#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int q = sqrt(n);
        if (q * q != n)
        {
            cout << "No" << '\n';
            continue;
        }

        bool isBeautiful = true;
        for (int i = 0; i < q; ++i)
        {
            for (int j = 0; j < q; ++j)
            {
                char ch = s[i * q + j];
                if ((i == 0 || i == q - 1 || j == 0 || j == q - 1))
                {
                    if (ch != '1')
                    {
                        isBeautiful = false;
                        break;
                    }
                }
                else if (ch != '0')
                {
                    isBeautiful = false;
                    break;
                }
            }
            if (!isBeautiful)
                break;
        }

        if (isBeautiful)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
    return 0;
}
