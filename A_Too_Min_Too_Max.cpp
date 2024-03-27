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
        ll value = 0;
        vector<ll> arr;
        ll x;
        for (ll i = 0; i < n; i++)
        {
            cin >> x;
            arr.push_back(x);
        }
        sort(arr.begin(), arr.end());

        ll m = arr[0];
        ll j = arr[n - 2];
        ll k = arr[1];
        ll l = arr[n - 1];

        value = abs(m - j) + abs(j - k) + abs(k - l) + abs(l - m);

        cout << value << "\n";
    }

    return 0;
}