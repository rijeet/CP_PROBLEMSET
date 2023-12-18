#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main() {
      FAST;
    string s[1000];
    int i = 0;
    char temp;
    while (i < 1000) {
        cin >> s[i];
        if (s[i].empty()) {
            break;
        }
        i++;
    }

temp = s[0][0];

if (temp >= 'a' && temp <= 'z')
temp= temp-32;
 s[0][0]=temp ;
 for (int j = 0; j < i; j++) {
        cout<<s[j];
    }
cout<<endl;
    return 0;
}
