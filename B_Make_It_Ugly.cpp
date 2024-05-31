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
        vector<ll> pn;
        map<ll, ll> mp;

        ll x, y;
        for (ll i = 0; i < n; i++)
        {

            cin >> x;
            pn.push_back(x);
            mp[x]++;
        }

        if (mp.size() == 1)
        {
            cout << -1 << "\n";
            continue;
        }
        ll p = pn[0];
        ll index = 0;
        ll score = n;

        for (ll i = 0; i < n; i++)
        {
            if (pn[i] == p)

                index++;

            else
            {
                score = min(score, index);
                index = 0;
            }
        }

        score = min(score, index);
        cout << score
             << "\n";
    }

    return 0;
}