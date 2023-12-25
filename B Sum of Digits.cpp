
#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
#define pb push_back
#define pop pop_back()
#define len(a) sizeof(a)
#define lc (n * 2)
#define rc ((n * 2) + 1)
int find_digit(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main()
{
    faster;
    string s;
    cin >> s;
    int len = s.size();
    if (len == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    int c = 0;
    int digit_sum = 0; // digit ke akbar value choto kore niye asteci like 10^5
    for (int i = 0; i < len; i++)
    {
        digit_sum += s[i] - '0'; // value ta onek boro tai string niye kaj koreci akhn kaj holo 991 ar digit sum ber kora ta hobe 19 aita ami ascill valuer sathe convert kore minues kore ber korteci
    }
    c++; // karon ami ak bar already digit sum ber kore pelci
    // cout << digit_sum << endl;
    int n = digit_sum; // digit sum ar value ta n ar modde diye dici
    while (n > 9)      // ak digit a value asle loop ta thamiye dibo
    {
        n = find_digit(n); // value ta call dici
        c++;
    }
    cout << c << endl;
    return 0;
} // like jei number ta kaj korteci ta onek boro tai value ta set korte parbo na
  // tai string niye kaj korte hobe