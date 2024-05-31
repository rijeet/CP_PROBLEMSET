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
        ll k, q;
        cin >> k >> q;
        ll score = 0;
        ll x, y;

        vector<ll> pk;
        vector<ll> pq;
        for (ll i = 0; i < k; i++)
        {

            cin >> x;
            pk.push_back(x);
        }
        for (ll i = 0; i < q; i++)
        {

            cin >> x;
            pq.push_back(x);
        }

        map<ll, ll> mp;
        for (ll i = 0; i < q; i++)
        {
            if (pq[i] < pk[0])
            {
                mp[i] = pq[i];
            }
            else
            {
                 mp[i]=pk[0]-1;
            }
        }

        for (const auto &pair : mp)
        {
            std::cout << pair.second << " ";
        }
        cout << endl;
       
    }

    return 0;
}