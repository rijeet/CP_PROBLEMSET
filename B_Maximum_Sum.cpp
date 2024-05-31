#include <bits/stdc++.h>
using namespace std;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using ll = long long;
const ll MOD = 1000000007;

int main()
{
    FAST;
    ll t;

    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<ll> pn(n);
        for (ll i = 0; i < n; i++)
        {

            cin >> pn[i];
        }
        ll curSum = 0;
        ll maxSum = 0;
        for (auto &x : pn)
        {

            curSum = curSum + x;
            if (curSum < x)

                curSum = x;

            if (maxSum < curSum)
                maxSum = curSum;
        }

        ll sum = (accumulate(pn.begin(), pn.end(), 0ll) % MOD + MOD) % MOD; // if we just negetive moduler the sum part there is no chane to get a negetive number

        for (ll i = 0; i < k; i++)
        {
            sum = (sum + maxSum) % MOD;//why % MOD bc, positive number
            maxSum = (maxSum*2) % MOD;//why % MOD bc, positive number
        }

        cout
            << sum << "\n";
    }

    return 0;
}
