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
        ll x, y;
        string s;
        cin >> s;
        // vector<char> pn;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'U')
                x++;
            else
                y++;
            //  pn.push_back(s[i]);
        }

        if (n == 1)
        {
            cout << "YES"
                 << "\n";
        }
        else if (n == 2)
        {
            cout << "NO"
                 << "\n";
        }
        else
        {
            if (x > y)
                cout << "YES"
                     << "\n";
            else
                cout << "NO"
                     << "\n";
        }
    }

    return 0;
}