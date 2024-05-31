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
        ll n;
        cin >> n;
        ll score = 0;
        ll x;

       unordered_map<ll, ll> mp;
           vector<ll> pn(n);
        for (ll i = 0; i < n; i++)
        {

            cin >> pn[i];
           
        }

        for (auto x:pn)
        {
            mp[x]++;
        }
        
        for (auto x: mp)
        {

            if (x.second >= 3)
            {
               ll y= x.second;
               while(y>2)
               {
                y=y-3;
                 score++;
               }
               
            }
        }
        cout << score << "\n";
    }

    return 0;
}