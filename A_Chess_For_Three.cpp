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

        ll score = 0;
        vector<ll> pn(3);
        for (ll i = 0; i < 3; i++)
        {
            cin >> pn[i];
        }

        if (pn[0] == 0 && pn[1] == 0 && pn[2] == 0)
        {
            cout << 0 << "\n";
        }
        else
        {
            if (pn[0] == 0)
            {
                while (pn[2] > 0)
                {
                    pn[2]--;
                    pn[1]--;
                    score++;
                }
            }
            else
            {
                while (pn[0] > 0 && pn[1] > 0 && pn[3] > 1)
                {
                    pn[0]--;
                    pn[2]--;
                    pn[2]--;
                    pn[1]--;
                    score++;
                    score++;
                    sort(pn.begin(), pn.end());
                }

                while (pn[2] >= 1)
                {
                    if (pn[0] > 0 && pn[2] > 0)
                    {
                        pn[0]--;
                        pn[2]--;
                        score++;
                    }
                    if (pn[1] > 0 && pn[2] > 0)
                    {
                        pn[1]--;
                        pn[2]--;
                        score++;
                    }
                    if (pn[0] == 0 && pn[1] == 0)
                    {
                        break;
                    }
                }
            }
            ll sum = accumulate(pn.begin(), pn.end(), 0LL);

            if (sum % 2 != 0)
            {
                cout << -1 << "\n";
            }
            else
                cout << score << "\n";
        }
    }

    return 0;
}