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
    string s,t;
    
    cin >> s;
    cin >> t;
     reverse(s.begin(), s.end()); 
        if (s==t)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    

    return 0;
}