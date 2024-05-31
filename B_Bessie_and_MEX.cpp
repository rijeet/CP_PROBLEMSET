#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using ll = long long;

ll MEX(const std::vector<ll> &nums)
{
    unordered_set<ll> s(nums.begin(), nums.end());

    for (ll mex = 0; ; mex++) {
        if (!s.count(mex))
            return mex;
    }
}

int main()
{
    FAST;
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        vector<ll> Gn(n);

        for (ll i = 0; i < n; i++) {
            cin >> Gn[i];
        }

        vector<ll> skip_index;

        for (ll i = 0; i < n; i++) {
            vector<ll> vec;
            for (ll j = 0; j < n; j++) {
                if (find(skip_index.begin(), skip_index.end(), j) == skip_index.end()) {
                    vec.push_back(j);
                    ll mex_value = MEX(vec);
                    ll lastElement = vec.back();
                    ll total = mex_value - lastElement;
                    if (Gn[i] == total) {
                        skip_index.push_back(j);
                        break;
                    }
                }
            }
        }

        for (ll r = 0; r < n - 1; r++) {
            cout << skip_index[r] << " ";
        }
        cout << skip_index.back() << "\n";
    }

    return 0;
}

