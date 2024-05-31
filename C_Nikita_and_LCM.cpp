#include <bits/stdc++.h>
using namespace std;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using ll = long long;
long long findGCD(long long a, long long b) {
    while (b) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long findLCM(long long a, long long b) {
    return (a / findGCD(a, b)) * b;
}

int main()
{
    FAST;
    ll tests;
    cin >> tests;

    while (tests--) {
        ll size;
        cin >> size;
        vector<long long> arr(size);
        unordered_set<long long> elementsSet;
        for (ll i = 0; i < size; ++i) {
            cin >> arr[i];
            elementsSet.insert(arr[i]);
        }

        long long arrayLCM = 1;
        bool overflow = false;
        for (ll i = 0; i < size; ++i) {
            arrayLCM = findLCM(arrayLCM, arr[i]);
            if (arrayLCM > 1e9) {
                overflow = true;
                break;
            }
        }

        if (!overflow && elementsSet.find(arrayLCM) == elementsSet.end()) {
            cout << size << '\n';
        } else {
          
          ll maxSpecialLen = 0;
            for (ll i = 0; i < (1 << size); ++i) {
                long long currentLCM = 1;
                bool valid = true;
               ll length = 0;
                for (ll j = 0; j < size; ++j) {
                    if (i & (1 << j)) {
                        currentLCM = findLCM(currentLCM, arr[j]);
                        if (currentLCM > 1e9) {
                            valid = false;
                            break;
                        }
                        ++length;
                    }
                }
                if (valid && elementsSet.find(currentLCM) == elementsSet.end()) {
                    maxSpecialLen = max(maxSpecialLen, length);
                }
            }
            cout << maxSpecialLen << '\n';
        }
    }

    return 0;
}