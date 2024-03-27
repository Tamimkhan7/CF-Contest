#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
int main()
{
    faster;
    string s;
    cin >> s;
    int c = 0, k = 0;
    int l = s.size();
    for (int i = 0; i < l; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            c++;
        else
            k++;
    }
    if (c > k)
    { // that is function
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s << endl;
    }
    else if (c == k)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s << endl;
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s << endl;
    }
}