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
        ll a;

        cin >> a;
        string s;
        
            cin >> s;
        int cout_p = count(s.begin(),s.end(),'+');
        int cout_M = count(s.begin(),s.end(),'-');
        int value =abs(cout_p-cout_M);

        cout << value
                 << "\n";
      
    }

    return 0;
}