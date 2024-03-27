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
        ll value = k / 2;
        ll testA = 0;
        ll testB = 0;

        ll a[n];
        ll b[m];

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        for (ll i = 1; i <= k; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                if (a[j] == i)
                {
                    testA++;
                   // cout << "A"
                    //     << t<<"\n";
                   break;
                }
            }

            for (ll l = 0; l < m; l++)
            {
                if (b[l] == i)
                {
                    testB++;
                 //   cout << "B"
                  //       << t<<"\n";
                   break;
                }
            }
        }

          if (testA >= value && testB >= value)
              cout << "YES\n";
           else
                 cout << "NO\n";
        }

        return 0;
    }