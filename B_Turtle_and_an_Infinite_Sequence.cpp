#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using ll = long long;

int main() {
    FAST;
    int t;
    cin >> t;

    while (t--) {
        ll n, m;
        cin >> n >> m;

        if (m == 0) {
            cout << n << "\n";
        } else {
            // Find the highest bit position of n
            ll highest_bit = 1;
            while (highest_bit <= n) {
                highest_bit <<= 1;
            }
            highest_bit--; // This is now the value where all bits lower than the highest bit in n are set

            // If m is large enough, n will be transformed to highest_bit
            if (m >= 34) { // 34 is enough since 2^34 is much larger than 10^9
                cout << highest_bit << "\n";
            } else {
                ll result = n;
                for (ll i = 1; i <= m; ++i) {
                    result |= (n + i);
                    result |= (n - i >= 0 ? n - i : 0);
                }
                cout << result << "\n";
            }
        }
    }

    return 0;
}




