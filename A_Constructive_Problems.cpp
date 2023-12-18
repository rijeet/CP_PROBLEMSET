#include <bits/stdc++.h>
using namespace std;
 
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using ll = long long;
using P = pair<ll,ll>;
 
int main() {
  FAST;
  
  int t = 1, ti;
 
  cin >> t;
 
  for (ti = 1; ti <= t; ++ti) {
    ll m, n, ans;
    cin >> n >> m ;
    ans =max(n,m);
     cout << ans << "\n";
  }

  return 0;
}