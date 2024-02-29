#include <bits/stdc++.h>
using namespace std;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
using ll = long long;
using P = pair<ll, ll>;

int main()
{
    FAST;

    int n = 1;
    cin >> n;
    string feelings = "I hate it";
    for (int i = 1; i <= n; i++)
    {

        if (i % 2 == 0)
        {
            feelings.erase(feelings.length() - 2);
            feelings += "that I love it";
        }
        else
        {
            feelings.erase(feelings.length() - 2);
            feelings += "that I hate it";
        }
        if (i == 1)
        {
            feelings = "I hate it";
        }
    }

    cout << feelings << "\n";

    return 0;
}