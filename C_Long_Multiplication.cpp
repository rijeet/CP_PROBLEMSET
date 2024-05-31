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

        ll score = 0;
        string XnumStr,YnumStr;
        cin >> XnumStr >>YnumStr;
        ll len = XnumStr.size();
       

        if (XnumStr < YnumStr)
        {
            swap(XnumStr, YnumStr);
        }

        bool xi = 0;

        for (ll i = 0; i < len; i++)
        {

            if (XnumStr[i] > YnumStr[i] && xi)
            {
                swap(XnumStr[i], YnumStr[i]);
        
            }
            if (XnumStr[i] != YnumStr[i])
            {
                xi = 1;
            }
        }

        cout << XnumStr << "\n";
        cout << YnumStr << "\n";
    }

    return 0;
}