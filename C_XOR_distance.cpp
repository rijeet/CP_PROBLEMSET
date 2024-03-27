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
        ll a, b, r;
        cin >> a >> b >> r;
        vector<ll> value1;

        ll stability = LLONG_MAX;
        ll minValue = 0;
        ll result1;
        ll result2;
        ll stability2;
        for (ll i = 0; i <= r; i++)
        {
            result1 = a ^ i;
            result2 = b ^ i;
            stability2 = abs(result1 - result2);

            minValue = std::min(stability, stability2);
            stability = stability2;
        }

        cout << minValue << "\n";
    }

    return 0;
}

