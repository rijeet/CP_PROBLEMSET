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
        ll a1, b1, a2, b2, a3, b3, a4, b4;

        ll value = 0;
        ll x = 0, y = 0;
        cin >> a1 >> b1;
        cin >> a2 >> b2;
        cin >> a3 >> b3;
        cin >> a4 >> b4;

        if (a1 == a2)
        {
            x = abs(b1 - b2);
            y = abs(b3 - b4);
        }

        if (a1 == a3)
        {
            x = abs(b1 - b3);
            y = abs(b2 - b4);
        }

        if (a1 == a4)
        {
            x = abs(b1 - b4);
            y = abs(b2 - b3);
        }
         
        
            cout <<x*y<< "\n";
     
    }

    return 0;
}