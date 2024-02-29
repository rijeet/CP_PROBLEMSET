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
        ll w, h, n;
        cin >> w >> h >> n;
        int value = 1;
        while (1)
        {
            if (w % 2 == 0 && h % 2 == 0)
            {
                w = w / 2;
               value*=2;
            }

            else if (w % 2 == 0)
            {
                w = w / 2;
                value*=2;
              
            }
            else if (h % 2 == 0)
            {
                h = h / 2;
               value*=2;
            }
            else
                break;
        }
        if (value >= n)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }

    return 0;
}