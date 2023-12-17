#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        char minChar = 'z';
        int operations = 0;
        string sortedSuffix = "";

        for (int j = n - 1; j >= 0; --j) {
            if (s[j] <= minChar) {
                minChar = s[j];
                sortedSuffix = s[j] + sortedSuffix;
            } else {
                break;
            }
        }

        if (sortedSuffix == s) {
            cout << 0 << endl;
        } else {
            size_t idx = s.rfind(sortedSuffix[0]);
            if (idx != string::npos) {
                cout << idx + 1 << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}

