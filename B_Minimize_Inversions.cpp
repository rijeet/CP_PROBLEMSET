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
        vector<ll> a(n), b(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];

        for (ll i = 0; i < n; i++)

            cin >> b[i];

        vector<pair<ll, ll>> vec(n);
        for (ll i = 0; i < n; i++)
        {
            vec[i] = make_pair(a[i], b[i]);
        }
        sort(vec.begin(), vec.end());

        for (ll i = 0; i < n; i++)
        {
            cout << vec[i].first << " ";
        }
        cout << "\n";
        for (ll i = 0; i < n; i++)
        {
            cout << vec[i].second << " ";
        }
        cout << "\n";
    }

    return 0;
}