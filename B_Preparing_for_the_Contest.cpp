#include <bits/stdc++.h>
using namespace std;
 
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using ll = long long;
using P = pair<ll,ll>;

int main() {
  FAST;
  
  int tc = 1, ti;
  cin >> tc;
 
  for (ti = 1; ti <= tc; ++ti) {
    int n,k;
    cin >> n >> k;
    int temp=n;
    int temp1=n-k;
    int j=0;
    int o=0;
   vector<int>q;
 
    for (int i = 0; i < k; ++i) {
     q.push_back(temp-i);
    }
 
    for (int i = 0; i < n; ++i) {
      
      if(j==k && !q.empty())
      {
           cout<<q.back()<<" ";
           q.pop_back();
           j=0;
      }
      else
      {
        
      
      if(o<=temp1)
      cout<<o<<" ";
      o++;
      j++;
      }
    }
 
    
 
    cout<<endl;
  }
 
  return 0;
}

