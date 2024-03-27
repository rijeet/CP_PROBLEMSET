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
        int b, k;

        cin >> b >> k;
        int q[b];
        int x = 1;
        for (int i = 0; i < b; i++)
        {
            cin >> q[i];
            x *= q[i];
        }
      //  cout << "X" << x << "\n";
        if (x == 2023)
        {
            cout << "YES"
                 << "\n";
            for (int i = 1; i < k; i++)
            {
                cout << 1 << " ";
            }
            cout << 1 << "\n";
        }
        else
        {

            //  1, 7, 17, 119, 289, 2023

            if (x == 289 && k >= 1)
            {
                cout << "YES"
                     << "\n";

                for (int i = 1; i < k; i++)
                {
                    cout << 1 << " ";
                }
                cout << 7 << "\n";
            }

            else if (x == 119 && k >= 1)
            {
                cout << "YES"
                     << "\n";

                for (int i = 1; i < k; i++)
                {
                    cout << 1 << " ";
                }
                cout << 17 << "\n";
            }

            else if (x == 17 && k >= 2)
            {
                cout << "YES"
                     << "\n";

                for (int i = 2; i < k; i++)
                {
                    cout << 1 << " ";
                }
                cout << 7 << " " << 17 << "\n";
            }

            else if (x == 7 && k >= 2)
            {
                cout << "YES"
                     << "\n";

                for (int i = 2; i < k; i++)
                {
                    cout << 1 << " ";
                }
                cout << 17 << " " << 17 << "\n";
            }

            else if (x == 1 && k >= 3)
            {
                cout << "YES"
                     << "\n";

                for (int i = 3; i < k; i++)
                {
                    cout << 1 << " ";
                }
                cout << 7 << " " << 17 << " " << 17 << "\n";
            }
            else
            {
                cout << "NO"
                     << "\n";
            }
        }

      //  cout << " t" << t << "\n";
    }
    return 0;
}