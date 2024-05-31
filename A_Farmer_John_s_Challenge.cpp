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
        ll n, k;
        cin >> n >> k;

        if (n == k)
        {
            for (ll i = 0; i < n - 1; i++)
            {

                cout << 1
                     << " ";
            }
            cout << 1
                 << "\n";
        }

        if (n != k && k == 1)
        {
            ll i = 0;
            for (i = 1; i < n; i++)
            {

                cout << i
                     << " ";
            }
             cout << i
                  << "\n";
        }
        if (n != k && k!=1)
        {
            cout << -1
                 << "\n";
        }
    }

    return 0;
}