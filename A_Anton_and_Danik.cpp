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
    ll t;
    string s; 
    cin >> t;
     cin >> s; 
    ll countA =count(s.begin(),s.end(),'A');
    ll countD =count(s.begin(),s.end(),'D');
        
 
        if (countA > countD)
            cout << "Anton" 
                 << "\n";
        else if (countA < countD)
            cout << "Danik"
                 << "\n";
        else 
        cout <<  "Friendship" 
                 << "\n";

    return 0;
}