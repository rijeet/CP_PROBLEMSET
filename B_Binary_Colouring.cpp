#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;

        vector<int> a;
        while (x != 0) {
            int bit = x % 2;
            if (bit == 1) {
                a.push_back(1);
                x -= 1;
            } else {
                a.push_back(0);
            }
            x /= 2;
            if (x % 2 == 1 && bit == 1) {
                // Ensure no consecutive 1s
                a.back() = -1;
                x += 1;
            }
        }

        // Ensure length n is within bounds
        while (a.size() < 32 && (a.empty() || a.back() == 0)) {
            a.push_back(0);
        }

        // Output results
        cout << a.size() << '\n';
        for (size_t i = 0; i < a.size(); ++i) {
            cout << a[i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
