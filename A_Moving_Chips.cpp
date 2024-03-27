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
        ll score = 0;
        string x = " ";
        vector<ll> digits;
        bool start = 1;
        bool goin = 0;
        ll st = 0;
        ll end = 0;
        for (ll i = 0; i < n; i++)
        {

            cin >> x;

            for (char digit : x)
            {
                digits.push_back(digit - '0');
            }
        }

        for (ll i = 0; i < n; i++)
        {
           
            if (digits[i] == 1 && start)
            {
                start = 0;
                st=i;
            }

             if (digits[i] == 1)
            {
                
                end=i;
            }
        }

        for (ll i = st; i <=end ; i++)
        {
            if (digits[i] == 0)
            {
                score++;
            }
        }
        
        cout << score << "\n";
    }

    return 0;
}