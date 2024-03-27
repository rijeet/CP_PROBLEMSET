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
      
        vector<ll> b(n);

        for (ll i = 0; i < n; i++)
        {

            cin >> b[i];
        }
        bool enter_in_Array = 1;

        while (1)
        {
            enter_in_Array = 0;
            for (ll i = 1; i < n - 1; i++)
            {
                if ((b[i - 1] >= 1) && (b[i] >= 2) && (b[i + 1] >= 1))
                {
                    enter_in_Array = 1;
                    b[i - 1] = b[i - 1] - 1;
                    b[i] = b[i] - 2;
                    b[i + 1] = b[i + 1] - 1;
                }
            }
          
            if (!enter_in_Array)
            {
                break;
            }
        }

        ll total = count(b.begin(), b.end(), 0);

        if (total == n)
        {
            cout << "YES"
                 << "\n";
        }
        else
            cout << "NO"
                 << "\n";
    }

    return 0;
}