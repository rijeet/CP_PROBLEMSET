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

    cin >> t;

    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll value = 0;
        ll val = 0;

       
         if(a%b==0){
              cout << value
             << "\n";
         } 
         else{

            val = a % b;
            value=b-val;
            cout << value
             << "\n";
         }  
        

        
        
    }

    return 0;
}