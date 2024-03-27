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
    ll n, p, q, pa, qa, found = 0;
    set<ll> level;
    cin >> n;
    cin >> p;
    while (p--)
    {
        cin >> pa;
        level.insert(pa);
    }
    cin >> q;
    while (q--)
    {
        cin >> qa;
        level.insert(qa);
    }

    for (int i = 1; i <= n; i++)
    {
        if (level.find(i) != level.end())
        {
            found++;
        }
    }

    if (found == n)
        cout << "I become the guy."
             << "\n";
    else
        cout << "Oh, my keyboard!"
             << "\n";

    return 0;
}