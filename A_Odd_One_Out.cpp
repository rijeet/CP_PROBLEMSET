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
        int a, b, c;

        cin >> a >> b >> c;
        if(a==b)
        {
         cout<<c<<"\n";
        
        }
         if(b==c)
        {
         cout<<a<<"\n";
        
        }
         if(a==c)
        {
         cout<<b<<"\n";
        
        }
        

    }
    return 0;
   
}