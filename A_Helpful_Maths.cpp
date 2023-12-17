#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main() {
      FAST;
    string s[100];
    int i = 0;

    while (i < 100) {
        cin >> s[i];
        if (s[i].empty()) {
            break;
        }
        i++;
    }

    vector<char> evenChars;

    for (int j = 0; j < i; j++) {
        for (int k = 0; k < s[j].size(); k += 2) {
            evenChars.push_back(s[j][k]);
        }
    }

    sort(evenChars.begin(), evenChars.end());

 for (int idx = 0; idx < evenChars.size(); idx++) {
       if(idx == 0) 
       cout << evenChars[idx];
       else
        cout <<"+"<<evenChars[idx];
    }
    cout << endl;

    return 0;
}
