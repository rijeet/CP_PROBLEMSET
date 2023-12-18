#include <bits/stdc++.h>
using namespace std;
 
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using ll = long long;
using P = pair<ll,ll>;
 
const int dx[] = { -1, 1, 1, -1 };
const int dy[] = { 1, 1, -1, -1 };
 
int main() {
  FAST;
  
  int tc = 1, ti;
  cin >> tc;
 
  for (ti = 1; ti <= tc; ++ti) {
    ll a, b, xk, yk, xq, yq, x, y, ans, i;
    cin >> a >> b >> xk >> yk >> xq >> yq;
    
    set<P> k, q;
 
    for (i = 0; i < 4; ++i) {
      x = xk + a*dx[i];
      y = yk + b*dy[i];
      k.insert({x, y});
 
      x = xk + b*dx[i];
      y = yk + a*dy[i];
      k.insert({x, y});
    }
 
    for (i = 0; i < 4; ++i) {
      x = xq + a*dx[i];
      y = yq + b*dy[i];
      q.insert({x, y});
 
      x = xq + b*dx[i];
      y = yq + a*dy[i];
      q.insert({x, y});
    }
 
    ans = 0;
    for (P p : k) {
      if (q.find(p) != q.end()) ans += 1;
    }
 
    cout << ans << "\n";
  }
 
  return 0;
}