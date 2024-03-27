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
    int t;

    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        string a, b, c;
        cin >> a >> b >> c;
 
        bool match =1;
        for (int i = 0; i < n; i++)
        {  
            
            if (a[i] != c[i] && b[i] != c[i])
            {
                match = 0;
               
            }
        
        }

        if (!match)
            cout << "YES"
                 << "\n";

        else
            cout << "NO"
                 << "\n";

        
    }

    return 0;
}