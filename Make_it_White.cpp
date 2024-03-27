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
        ll  n;
        cin >> n;
        ll value = 0;
        string s;
        cin>> s;
        bool check =1;
        ll startIndex =0;
        ll endIndex =0;
        for (ll i = 0; i < n; i++)
        {
           if(s[i]=='B' && check) 
           {
            //value++;
            startIndex=i;
            check =0;
           }

            if(s[i]=='B') 
           {
            //value++;
            endIndex=i;

           }
        }

        ll total = endIndex-startIndex+1;

        cout<<total<<"\n";
        
  
    }

    return 0;
}