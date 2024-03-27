#include <bits/stdc++.h>
using namespace std;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using ll = long long;

ll sumOfDigits(ll number)
{
    ll sum = 0;

    while (number != 0)
    {
        sum += number % 10;
        number /= 10;
    }

    return sum;
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
        if (n > 9)
        {
            long double m = n;
            ll x=n;
            ll t = 10;
            ll sum = 0;
            ll ten =10;
            while (n > 1)
            {
                sum += 36 +t;
                n /= 10;
                m /= 10;
                t = t + 10;
            }
            cout << "sum " << sum << " "
                 << "t " << t << " "
                 << "m " << m << "\n";

                 /*
                 ll result = 0;
                 for (size_t i = 0; i <= x; i++)
                 {
                    result += sumOfDigits(i);
                 }
                 
                 
                 */
        }
        else
        {
            ll score = 0;
            for (ll i = 1; i <= n; i++)
            {
                score += sumOfDigits(i);
            }
            cout << score << "\n";
        }
    }

    return 0;
}
