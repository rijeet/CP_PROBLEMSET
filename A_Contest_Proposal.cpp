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

        vector<ll> pn(n);
        vector<ll> pm(n);
        for (ll i = 0; i < n; i++)
        {

            cin >> pn[i];
        }

        for (ll i = 0; i < n; i++)
        {

            cin >> pm[i];
        }

        bool flag = true;
        ll track_a, track_b;
        track_a = 0;
        track_b = 0;
        for (ll i = track_a; i < n; i++)
        {

            for (ll j = track_b; j < n; j++)
            {
                if (pn[j] > pm[j])
                {
                    flag = false;
                    // track_b = j;
                    // i = j-1;
                    score++;
                    break;
                }
            }

            if (flag)
                break;
            else
            {
                pn.insert(pn.begin(), pm[i]);
                // pn.erase(pn.end());
                sort(pn.begin(), pn.end());
            }
        }
        cout << score << "\n";
    }

    return 0;
}