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
        ll a, b, c;
        cin >> a >> b >> c;
        ll score = 0;
        ll x, y;

        if (a < b && b < c)

            cout << "STAIR"
                 << "\n";
        else if (a < b && b > c)
            cout << "PEAK"
                 << "\n";
        else
            cout << "NONE"
                 << "\n";
    }

    return 0;
}