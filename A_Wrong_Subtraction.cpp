#include <bits/stdc++.h>
using namespace std;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using ll = long long;
int main()

{
    FAST;
    ll n, k;
    cin >> n >> k;

    while (k--)
    {
        if (n % 10 == 0)
        {
            n = n/10;
        }
        else
        n--;
    }
    cout<<n<<"\n";
    return 0;
}
