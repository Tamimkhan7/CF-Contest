#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> x(n - 1);

    // Read input values into the array
    for (int i = 0; i < n - 1; i++)
        cin >> x[i];

    // Initialize the array with first element
    vector<int> a(n);
    a[0] = x[0] + 1;

    // Calculate the remaining elements of the array
    for (int i = 1; i < n; i++)
    {
        a[i] = (x[i - 1] % a[i - 1] == 0) ? x[i - 1] + 1 : x[i - 1] % a[i - 1];
    }

    // Output the array
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
