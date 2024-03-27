#include <bits/stdc++.h>
using namespace std;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using ll = long long;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> p(n);

        iota(p.begin(), p.end(), 1);
        sort(p.begin(), p.end(), greater<ll>());

        for (ll i = 0; i < n - 1; i++)
        {
            for (ll j = 0; j < n - 1; j++)
            {

                if (i == j)
                    continue;

                if (p[j] % p[i] == 0)
                {
                    swap(p[i], p[j]);
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << p[i] << " ";
        }

        cout << endl;
    }

    return 0;
}