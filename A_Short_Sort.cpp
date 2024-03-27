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
        string s;
        cin >> s;
        int value = 0;

        for (int i = 0; i < 3; i++)
        {
            if (s[0] == 'a')
                value++;
            if (s[1] == 'b')
                value++;
            if (s[2] == 'c')
                value++;
        }

        if (value >= 1)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }

    return 0;
}