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
        ll score = 0;
        ll x, y;

        deque<ll> pn(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> pn[i];
        }
     ll sum = accumulate(pn.begin(), pn.end(), 0LL);

        ll i = 0;

        if(sum<k)
        {
           score=n;
        }
       else{
         while ((!pn.empty()) && (i < k))
        {
            if (i % 2 == 0)
            {
                 pn[0] = pn[0] - 1;
                if (pn[0] == 0)
                {
                    pn.pop_front();
                    score++;
                }
            }
            else
            {
                 pn[pn.size() - 1] = pn[pn.size() - 1] - 1;
                if (pn[pn.size() - 1] == 0)
                {
                    pn.pop_back();
                    score++;
                }
            }
            i++;
        }
       }
        cout << score << "\n";
    }

    return 0;
}




