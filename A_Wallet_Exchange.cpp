/*#include <bits/stdc++.h>
using namespace std;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using ll = long long;

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll temp = 0;
    ll diff = 0;
    bool alice = true;
    bool boob = false;

    while (1)
    {
        if (alice)
        {
            if (a == b)
            {
                cout << "Bob"
                     << "\n";
                break;
            }
            if (a == 0 && b != 0 && b % 2 == 0 && alice)
            {
                cout << "Bob"
                     << "\n";
                break;
            }
            if (b > a && b != 0 && alice)
            {
                b--;
                temp = b;
                b = a;
                a = temp;
                alice = false;
                boob = true;
            }
            if (alice && a != 0)
            {
                a--;
                alice = false;
                boob = true;
            }

            if (a == 0 && b == 0 && alice)
            {
                cout << "Bob"
                     << "\n";
                break;
            }
        }

        else
        {
            if (b == 0 && a != 0 && a % 2 != 0 && boob)
            {
                cout << "Alice"
                     << "\n";
                break;
            }
            if (a > b && a != 0 && boob)
            {
                a--;
                temp = a;
                a = b;
                b = temp;
                alice = true;
                boob = false;
            }
            if (boob && b != 0)
            {
                b--;
                alice = true;
                boob = false;
            }

            if (a == 0 && b == 0 && boob)
            {
                cout << "Alice"
                     << "\n";
                break;
            }
        }
    }
}

int main()
{
    FAST;
    ll t;

    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
*/

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

    int tc = 1, ti;
    cin >> tc;

    for (ti = 1; ti <= tc; ++ti)
    {
        ll x, y;
        cin >> x >> y;

        if ((x + y) % 2 != 0)

            cout << "Alice\n";

        else
            cout << "Bob\n";
    }

    return 0;
}