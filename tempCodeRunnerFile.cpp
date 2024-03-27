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
        ll x, y;

        vector<ll> pn;
        for (ll i = 0; i < n; i++)
        {

            cin >> x >> y;
            pn.push_back(x);
            pn.push_back(y);
        }
        sort(pn.begin(), pn.end());

        for (ll i = 0; i <pn.size(); i++)
        {
             score += min(pn[i], pn[i + 1]);
           i++;
        }
        cout << score << "\n";
    }

    return 0;
}