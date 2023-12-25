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
    ll t;
    cin >> t;
    while (t--)
    {
        faster;
        ll n;
        cin>>n;
        ll arr[n],arr2[n];
        for(int i=0; i<n-1; i++)
        {
            cin>>arr[i];
        }

        for(int i=0; i<n-1; i++)
        {
            if(arr[i]>=arr[i+1])
            {
                arr2[i] +=arr[i];
            }
            else
            {
                arr2[i] +=arr[i];
                if(arr[i] <= arr[i+2])
                {
                    arr2[i] += arr[i];
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            cout<<arr2[i]<<" ";
        }
        cout<<endl;
    }
}
//pore korbo
