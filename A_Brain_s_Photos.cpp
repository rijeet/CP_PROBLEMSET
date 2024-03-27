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
    char arr[n][m];
    bool temp = false;


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'C' || arr[i][j] == 'M' || arr[i][j] == 'Y')
            {
                temp = true;
            }
        }
    }

    if (temp)
        cout << "#Color"
             << "\n";
    else
        cout << "#Black&White"
             << "\n";

    return 0;
}