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
        int n;

        cin >> n;
        int a;
        int sumL = 0;
        int sumD = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a;
            if(i%2==0)
            {
                sumL+=a;
            }
            else
            sumD+=a;
        }

        if (sumL==sumD)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}