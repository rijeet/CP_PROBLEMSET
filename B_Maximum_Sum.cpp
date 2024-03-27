#include <bits/stdc++.h>
using namespace std;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using ll = long long;
const ll MOD = 1000000007;

bool allElementsEqual(const std::vector<ll> &vec)
{

    ll firstElement = vec[0];
    for (ll i = 1; i < vec.size(); ++i)
    {
        if (vec[i] != firstElement)
        {
            return false;
        }
    }

    return true;
}

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
        vector<ll> pn(n);
        bool allpos = 1;
        for (ll i = 0; i < n; i++)
        {

            cin >> pn[i];
            if (pn[i] < 0)
            {
                allpos = 0;
            }
        }
        ll sum = accumulate(pn.begin(), pn.end(), 0);

        while (k--)
        {

            if (sum < 0)
            {
                break;
            }
            if (allpos)
            {
                sum = accumulate(pn.begin(), pn.end(), 0);
                pn.push_back(sum);
            }
            else
            {
                sum = accumulate(pn.begin(), pn.begin() + 3, 0);
                pn.insert(pn.begin(), sum);
            }
        }
        if (allElementsEqual(pn))
        {
            sum = pn[0];
            score = (sum % MOD + MOD) % MOD;
            cout << score*n << "\n";
        }
        else
        {
            sum = accumulate(pn.begin(), pn.end(), 0);
            score = (sum % MOD + MOD) % MOD;
            cout << score << "\n";
        }
    }

    return 0;
}
