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
        vector<ll> pn;
        for (ll i = 0; i < n; i++)
        {

            cin >> x;
            if(x<0)
            {
                pn.push_back(-x);

            }
            else
            pn.push_back(x);
        
        }
        

        for (ll i = 0; i <pn.size(); i++)
        {
             score += pn[i];
           
        }
        cout << score << "\n";
    }

    return 0;
}