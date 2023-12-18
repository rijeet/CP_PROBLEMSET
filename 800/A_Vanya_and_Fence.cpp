#include <bits/stdc++.h>
using namespace std;
 
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using ll = long long;
 
int main() {
  FAST;
  
  int n = 1, ti, h=1;
  cin >> n>>h;
   ll a, ans = 0;
  for (ti = 1; ti <= n; ++ti) {
   
    cin >> a;
    if(a>h)
    ans+=2;
    else
    ans+=1;
  }
  cout << ans << "\n";
  return 0;
}