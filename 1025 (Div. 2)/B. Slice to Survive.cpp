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
  int n,m,a,b;cin>>n>>m>>a>>b;
  int ans =0;
  int x = (n-a);
  while(x>1){
   //   show(x);
      if(x%2==0)x/=2;
      else x = x/2+1;
      ans++;
    }
 // show(ans);
  //if(x>0)ans++;
//  m  = (m-b)+1;
while(m>1){
     if(m%2==0)m/=2;
    else m = m/2+1;
    ans++;
}
//  if(m>0)ans++;
 show(ans);



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