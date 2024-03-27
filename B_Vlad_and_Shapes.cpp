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
        char X = '\0';

        char arr[n][n];
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                cin >> X;
                arr[i][j] = X;
            }
        }
        ll one = 0;
        bool One_sequence = 0;

        for (ll i = 0; i < n; i++)
        {
            one = 0;
            for (ll j = 0; j < n; j++)
            {

                if (arr[i][j] == '1')
                {
                    one++;
                }
            }
            if (one == 1)
            {
                One_sequence = 1;
            }
        }

        if (!One_sequence)
        {
            cout << "SQUARE"
                 << "\n";
        }
        else
            cout << "TRIANGLE"
                 << "\n";
    }

    return 0;
}