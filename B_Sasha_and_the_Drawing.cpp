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
        long double k;
        cin >> n>> k;
        double value = 0;

        double x = ((4 * n) - 2);

        if (k==x)
        {
            value = n * 2;
        }
        else
        {  
            value = ceil(k / 2);
           
        }

         cout << value << "\n";
    }

    return 0;
}