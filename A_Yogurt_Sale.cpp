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
        ll n,a,b;
        cin >> n>>a>>b;
        ll score = 0;
        ll score1=0;
        ll x=0, y=0;
        
        if(n%2==0)
        {
            x=n/2;
        }
        else{
            x=n/2;
            y=a;
        }

        score = (x*b)+y;
        score1 =n*a;

        if(score<score1)
        {
            cout << score << "\n";
        }
        else 
        cout << score1 << "\n";
    }

    return 0;
}