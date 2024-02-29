/*
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
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            sum += a;
        }

         int root = sqrt(sum);
          

        if ((root * root) == sum)
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
*/
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
        ll a;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            sum += a;
        }

         ll root = sqrt(sum);
          

        if ((root * root) == sum)
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