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
        ll n;
        cin >> n;
        ll k = 0;

        set<ll> notvalues;
        ll grether_equal = 0, less_equal = 0;
        ll minus_cnt = 0;
        ll netvalue = 0;

        while (n--)
        {
            ll a, x;
            cin >> a >> x;

            if (a == 1)
            {
                if (x >= grether_equal)
                    grether_equal = x;
            }
            if (a == 2)
            {
                if (x >= less_equal)
                    less_equal = x;
            }
            if (a == 3)
            {
                notvalues.insert(x);
            }
        }
        
        if (grether_equal >= less_equal)
        {
            cout << 0 << "\n";
        }
        else
        {
            for (const auto &element : notvalues)
            {
                if(element>=grether_equal &&element<=less_equal ) 
                {
                    minus_cnt++;
                }
            }
           
           ll check =0;
           check =less_equal-grether_equal;
            if(check==minus_cnt)
            {
                 cout << 0 << "\n";
            }
            else{
                 netvalue = (less_equal - grether_equal) - minus_cnt + 1;
            cout << netvalue
                 << "\n";
            }
            
        }
    }

    return 0;
}