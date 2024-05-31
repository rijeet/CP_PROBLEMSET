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

    ll a, b, c, d;

    ll score = 0;
    ll x, y, z;

    vector<ll> pn(4);
    for (ll i = 0; i < 4; i++)
    {

        cin >> pn[i];
    }
    sort(pn.begin(), pn.end());

    x = pn[3] - pn[0];
    y = pn[3] - pn[1];
    z = pn[3] - pn[2];
    cout << x << " " << y << " " << z << "\n";
    return 0;
}