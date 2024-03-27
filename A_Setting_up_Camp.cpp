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
        ll a, b, c;
        cin >> a >> b >> c;

        ll x = 0, y = 0, z = 0, score = 0, k = 0;

        if (b % 3 == 0)
        {
            x = b + c;
             y = std::ceil(static_cast<double>(x) / 3);
           
            score = a + y;
        }
        else
        {
            z = b % 3;
            k = 3 - z;
            if (c >= k)
            {
                x = b + c;
               y = std::ceil(static_cast<double>(x) / 3);
               
                score = a + y;
            }
            else
            {
                 score =-1;
            }
        }

        cout << score << "\n";
    }

    return 0;
}