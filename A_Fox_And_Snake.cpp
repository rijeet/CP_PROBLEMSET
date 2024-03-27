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
    int n, m;

    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        if (i % 4 == 0)
        {
            cout << "#";
            for (int j = 1; j < m; j++)
            {
                cout << ".";
            }
            cout << "\n";
        }
        else
        {
            if (i % 2 == 0)
            {

                for (int j = 1; j < m; j++)
                {
                    cout << ".";
                }
                cout << "#";
                cout << "\n";
            }
            else
            {
                for (int j = 0; j < m; j++)
                {
                    cout << "#";
                }
                cout << "\n";
            }
        }
    }

    return 0;
}