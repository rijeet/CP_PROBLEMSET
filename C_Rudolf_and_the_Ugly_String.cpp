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

        string b =" ";
        cin >> b;

    
        ll score=0;

        
            for (ll i = 1; i < n - 1; i++)
            {
                if ((b[i - 1] == 'p') && (b[i] == 'i') && (b[i + 1] == 'e'))
                {
                    score++;
                    b[i - 1] = b[i - 1] - 1;
                    b[i] = b[i] - 2;
                    b[i + 1] = b[i + 1] - 1;
                }
            }

             for (ll i = 1; i < n - 1; i++)
            {
                if ((b[i - 1] == 'm') && (b[i] == 'a') && (b[i + 1] == 'p'))
                {
                    score++;
                    b[i - 1] = b[i - 1] - 1;
                    b[i] = b[i] - 2;
                    b[i + 1] = b[i + 1] - 1;
                }
            }

            
            cout << score
                 << "\n";
       
    }

    return 0;
}