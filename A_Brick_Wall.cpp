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
    ll t;
    
    cin >> t;

    while (t--)
    {
        ll  n,m;
        cin >>n>> m;
    
        ll d =floor(m/2);
        ll stability = d*n;

        cout<<stability<<"\n";
    }

    return 0;
}