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

    long long int n, digitCount = 0, Four_Count = 0, Seven_Count = 0, Total = 0;
    cin >> n;
    string numStr = to_string(n);
    digitCount = numStr.size();

    Four_Count = count(numStr.begin(), numStr.end(), '4');

    Seven_Count = count(numStr.begin(), numStr.end(), '7');

    Total = Four_Count + Seven_Count;

    if (Total == 4 ||  Total == 7  )
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";

    return 0;
}