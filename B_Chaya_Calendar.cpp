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
        ll x;
        vector<ll>arr;
        for (ll i = 0; i < n; i++)
        {
            cin >> x;
            arr.push_back(x);

        }

        ll score = (18 / 3) + (18 / 2) + (18 / 4) + (18 / 5) + (18 / 9)+18-6;

        cout << score << "\n";
    }

    return 0;
}