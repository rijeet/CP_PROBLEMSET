#include <bits/stdc++.h>
using namespace std;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using ll = long long;
vector<ll> pn;
void printPattern(ll n)
{
    for (int i = 0; i < (1 << n); ++i)
    {
        std::bitset<32> binary(i);
        pn.push_back(stoi(binary.to_string().substr(32 - n)));
    }
}
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
        ll x = 1, y = 0;
        printPattern(4);

        ll i = 0;

        for (i = 0; i < pn.size(); i++)
        {
            if (n <= pn[i] * pn[i])
                break;
        }

        // cout << p << "\n";
        //    cout << q << "\n";

        cout << "t " << 11 - t << "\n";
        cout << pn[i] << "\n";
        // cout << "YES" << "\n";
        //  cout << "NO" << "\n";
    }

    return 0;
}