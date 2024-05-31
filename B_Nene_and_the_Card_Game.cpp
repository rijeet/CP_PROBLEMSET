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
        map<int, int> mp;
        vector<ll> pn;
        for (ll i = 0; i < n; i++)
        {

            cin >> x;
            mp[x]++;
        }
        for (const auto &pair : mp)
        {

            if (pair.second >= 2)
            {

                score++;
            }
        }
        cout << score << "\n";
    }

    return 0;
}