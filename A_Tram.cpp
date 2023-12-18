#include <bits/stdc++.h>
using namespace std;
 
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using ll = long long;
using P = pair<ll,ll>;
 
vector<int> v1;
 
int main() {
  FAST;
  
  int tc = 1, ti;
  cin >> tc;
  ll a, b, ans=0, total=0;
  for (ti = 1; ti <= tc; ++ti) {
   
    cin >> a >> b;
    
   total +=b;
   total-=a;
    v1.push_back(total); 
   
   
  }
  cout<<*max_element(v1.begin(), v1.end())<<endl;
 
  return 0;
}