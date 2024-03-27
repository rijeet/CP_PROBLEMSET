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
        ll n, k;
        
        cin >> n >> k;
        vector<ll> a(n), x(n);
        vector<pair<ll, ll>> pn(n + 1);
        for (ll i = 0; i < n; i++)
        {

            cin >> a[i];
        }

        for (ll i = 0; i < n; i++)
        {

            cin >> x[i];
        }
        for (ll i = 0; i < n; i++)
        {
            pn[i] = {x[i], a[i]};
        }

        pn[n] = {0, 0};
        std::sort(pn.begin(), pn.end());

        vector<pair<ll, ll>> left, right;
        bool found = false;
        for (const auto &p : pn)
        {
            if (p == make_pair(0LL, 0LL))
            {
                found = true;
                continue;
            }
            if (!found)
            {
                left.push_back(p);
            }
            else
            {
                right.push_back(p);
            }
        }
        ll l,la;
        ll r,ra;
        bool alive = 1;
        bool mosnteralive = 1;
        ll baki=0;
        while (alive && mosnteralive)
        {
            if (!left.empty())
            {
                l = left.front().second;
                la = left.front().first;
                
                
            }
            if (!right.empty())
            {
                r = right.front().second;
                ra = right.front().first;
            }
            ll health = r + l;
           
            if (la==0 || ra==0 )
            {
                alive=0;
            }
            
            
            


            left.erase(remove_if(left.begin(), left.end(), [](const pair<ll, ll> &p)
                                     { return p.second == 0; }),
                           left.end());

            right.erase(remove_if(right.begin(), right.end(), [](const pair<ll, ll> &p)
                                  { return p.second == 0; }),
                        right.end());

            for (auto &p : left)
            {
                p.first += 1;
            }

            for (auto &p : right)
            {
                p.first -= 1;
            }
        }
        cout << "YES"
             << "\n";
        cout << "NO"
             << "\n";
    }

    return 0;
}