#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

void solve()
{
  int n;cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  int zero=0;
  for(int i=0;i<n;i++){
      if(v[i]==0)zero++;
if(i+1<n and v[i]==0 and v[i+1]==0){
     cout<<"YES\n";
        return;
}

  }
if(zero==0){
     cout<<"YES\n";
        return;
}
  
  cout<<"NO\n";
}

int main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}