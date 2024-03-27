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
        ll sum = 0;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        sum = sum / n;

        for (ll i = 0; i < n; i++)
        {
            if (arr[i] == sum)
                continue;
            for (ll j = 0; j < n; j++)
            {
                if (arr[j] == sum || i == j || arr[i] <= arr[j])
                    continue;
                arr[i] = arr[i] - 1;
                arr[j] = arr[j] + 1;
            }
        }

        for (ll i = 0; i < n; i++)
        {
            if()
        }
        cout << "\n";
    }

    return 0;
}