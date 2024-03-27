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
        ll n, m, k;
        cin >> n >> m >> k;
        ll score = 0;

        vector<ll> b(n);
        vector<ll> c(m);
        for (ll i = 0; i < n; i++)
        {

            cin >> b[i];
        }
        for (ll i = 0; i < m; i++)
        {

            cin >> c[i];
        }

        for (ll i = 0; i < n; i++)
        {

            for (ll j = 0; j < m; j++)
            {
                ll temp = b[i] + c[j];
                if (temp <= k)
                {
                    score++;
                }
            }
        }

        cout << score << "\n";
    }

    return 0;
}