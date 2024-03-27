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
    int t,p;
    
    cin >> t;
    bool HARD = false;
    while (t--)
    {  
        
       cin>>p;

       if(p==1)
       {
        HARD = true;
       }
        
    }
if (!HARD)
            cout << "EASY"
                 << "\n";
        else
            cout << "HARD"
                 << "\n";
    return 0;
}