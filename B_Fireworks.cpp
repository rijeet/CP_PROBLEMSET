#include <bits/stdc++.h>
using namespace std;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using ll = long long;
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, m;
        cin >> a >> b >> m;

       
        long long lcm_ab = lcm(a, b);

      
        long long fireworks = (m / lcm_ab) * 2;

     
        fireworks += (m / a) - (m / lcm_ab);
        fireworks += (m / b) - (m / lcm_ab);

        cout << fireworks+2 << endl;
    }

    return 0;
}
