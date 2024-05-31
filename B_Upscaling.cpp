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

        for (ll i = 0; i < 2 * n; ++i)
        {
            for (ll j = 0; j < 2 * n; ++j)
            {

                if ((i / 2) % 2 == 0)
                {
                    if ((j / 2) % 2 == 0)
                    {
                        std::cout << "#";
                    }
                    else
                    {
                        std::cout << ".";
                    }
                }
                else
                {
                    if ((j / 2) % 2 == 0)
                    {
                        std::cout << ".";
                    }
                    else
                    {
                        std::cout << "#";
                    }
                }
            }
            std::cout << std::endl;
        }
    }

    return 0;
}