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
        string s;
        cin >> s;
        bool check = 1;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '*')
            {
                if ((i+1)< n)
                {
                    if(s[i+1] == '*')
                    {
                        check = 0;
                        break;
                    }
                }
            }
            if( (s[i] == '@') && check) 
            {
                score += 1;
            }
        }
        cout << score << "\n";
    }

    return 0;
}