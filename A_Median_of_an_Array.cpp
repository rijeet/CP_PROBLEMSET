#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int median_index = (n + 1) / 2 - 1;
        int median = a[median_index];

        int operations = 0;

        for (int i = median_index; i < n; ++i) {
            if (a[i] > median) {
                break;
            }
            operations++;
        }

        cout << operations << "\n";
    }

    return 0;
}
