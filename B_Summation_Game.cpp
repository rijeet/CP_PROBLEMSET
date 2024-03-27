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
        ll n, k, x;
        cin >> n >> k >> x;
        ll v;
        vector<ll> values;

        while (n--)
        {
            cin >> v;
            values.push_back(v);
        }
        std::sort(values.begin(), values.end());
      
        ll len = values.size();
        if (len >= k)
        {
           values.erase(values.end() - k, values.end());
        }
        //   values.erase(values.begin(), values.begin() + k);

         len = values.size();

        if (len >= x)
        {
            for (int i = values.size() - 1; i >= values.size() - x; --i)
            {
                values.push_back(-values[i]);
            }
        }
         ll sum = std::accumulate(values.begin(), values.end(), 0);
        std::cout << sum << std::endl;
    }

    return 0;
}