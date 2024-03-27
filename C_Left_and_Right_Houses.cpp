#include <bits/stdc++.h>
using namespace std;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        string preferences;
        cin >> preferences;
        
        int left_ones = 0, right_zeros = 0;
        for (int i = 0; i < n; ++i) {
            if (preferences[i] == '1') {
                if (i < (n + 1) / 2) {
                    left_ones++;
                } else {
                    right_zeros++;
                }
            }
        }
        
        int min_diff = n, min_i = -1;
        for (int i = 0; i <= n; ++i) {
            int left_houses = i;
            int right_houses = n - i;
            
            int satisfied_left = (left_houses + 1) / 2;
            int satisfied_right = (right_houses + 1) / 2;
            
            int diff = abs(n / 2 - i);
            
            if (left_ones >= satisfied_left && right_zeros >= satisfied_right && diff < min_diff) {
                min_diff = diff;
                min_i = i;
            }
        }
        
        cout << min_i << endl;
    }
    
    return 0;
}
