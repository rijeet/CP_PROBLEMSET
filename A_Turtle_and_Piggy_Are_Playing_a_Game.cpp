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
        ll n, m;
        cin >> n >> m;
        ll result = 1;
        ll x, y;
        ll score = 0;
        bool ss=0;
        while (result < m)
        {
            result *= 2;
            score++;
            if (result == m)
            {   ss=1;
                cout << score << "\n";
                break;
            }
        }
        if(!ss)
        cout << score-1 << "\n";
    }

    return 0;
}