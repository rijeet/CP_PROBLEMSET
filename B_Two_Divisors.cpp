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
    int t;

    cin >> t;

    while (t--)
    {
        ll a, b;

        cin >> a >> b;
        ll x = 1;

        if (a == 1)
        {

            for (int i = 0; i < 2; ++i)
            {
                x *= b;
            }
        }
        else if (a%10==0 && b%10==0)
        {
            x=b*2;
        }
        else
        {
            x = a * b;
           ll p= x;
            for (ll i = p; i > b; i--)
            {
                if (i % b == 0 && i % a == 0)
                {
                    x = i;
                }
            }
        }

        if (a < b < x && x % a == 0 && x % b == 0)
            cout << x << "\n";
    }
    return 0;
}