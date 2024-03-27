#include <bits/stdc++.h>
using namespace std;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main()
{
    FAST;

    int n = 1, ti;
    cin >> n;
    string s[n];
    char t = '\0';
    int ans = 0;
    for (ti = 0; ti < n; ++ti)
    {

        cin >> s[ti];
       
        if (t == s[0][ti])
        {
            ans++;
        }
        else
            t = s[0][ti];
    }

    cout << ans << "\n";

    return 0;
}