#include <bits/stdc++.h>
using namespace std;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using ll = long long;

int main()
{
    FAST;
    ll t;

    cin >> t;

    while (t--)
    {
        ll n, k;
        ll length =n*k;
        cin >> n >> k;
        char lowercaseAlphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
       // string temp=""; 
       deque<char> q; 
        for (ll i = 0; i < k; i++)
        {
          // temp+=lowercaseAlphabet[i];
           q.push_back('a'+i);
        }

        for (ll i = 0; i < n; i++)
        {
          // temp+=temp;
          for (char c : q) cout << c;
        }
        
     
       cout<<"\n";

   
   
    }

    return 0;
}


