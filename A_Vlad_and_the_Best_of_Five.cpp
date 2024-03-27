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
        string s;
        cin >> s;
        ll A = 0;
        ll B = 0;
        
        for (ll i = 0; i < 5; i++)
        {
            if (s[i] == 'A')
                A++;
            if (s[i] == 'B')
                B++;
        }

        if (A >= B)
        {
            cout << "A"
                 << "\n";
        }
        else
            cout << "B"
                 << "\n";
    }

    return 0;
}