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
        string s;
        cin >> s;
        ll score = 0;
        ll x = 0, y;
        string temp = s.substr(0, 2);
        string min = s.substr(2, s.size());
        int hour = stoi(temp);

        if (hour >= 12)
        {
            ll h = hour - 12;
            if (h < 10)
            {
                if (h == 0)
                {
                    cout << 12 << min << " PM"
                         << "\n";
                }
                else
                {
                    cout << 0 << h << min << " PM"
                         << "\n";
                }
            }

            else
                cout << h << min << " PM"
                     << "\n";
        }
        else
        {
            if (hour == 0)
            {
                cout << 12 << min << " AM"
                     << "\n";
            }
            else
                cout << s << " AM"
                     << "\n";
        }
    }

    return 0;
}