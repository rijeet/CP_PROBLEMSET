#include <bits/stdc++.h>
using namespace std;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using ll = long long;

bool haveSameElements(const std::vector<ll> &vec1, const std::vector<ll> &vec2)
{

    vector<ll> sortedVec1 = vec1;
    vector<ll> sortedVec2 = vec2;
    sort(sortedVec2.begin(), sortedVec2.end());

    return sortedVec1 == sortedVec2;
}

int main()
{
    FAST;
    ll t;

    cin >> t;

    while (t--)
    {
        ll n, c, d;
        cin >> n >> c >> d;
        ll score = 0;

        vector<ll> pn(n * n);
        vector<ll> cn(n * n);
        for (ll i = 0; i < n * n; i++)
        {

            cin >> pn[i];
        }
        sort(pn.begin(), pn.end());

        ll x = pn[0];
        ll y = 0;
        bool f1 = 1;
        for (ll i = 0; i < n; i++)
        {
            if (f1)
            {
                cn[y] = x;
                y++;
                f1 = 0;
            }
            else
            {
                cn[y] = cn[y - n] + c;
                y++;
            }

            for (ll j = 0; j < n - 1; j++)
            {
                cn[y] = cn[y - 1] + d;
                y++;
            }
        }

        if (haveSameElements(pn, cn))
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }

    return 0;
}