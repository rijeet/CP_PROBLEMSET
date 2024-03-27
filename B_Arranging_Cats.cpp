#include <bits/stdc++.h>
#include <bitset>
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
        ll len;
        cin >> len;

        string str1, str2;
        cin >> str1;
        cin >> str2;

    ll countT=0;
    
        std::vector<char> binary1(str1.begin(), str1.end());
        std::vector<char> binary2(str2.begin(), str2.end());


        for (int i = 0; i < len; ++i)
        {
            if (binary2[i] =='1' && binary1[i] != binary2[i])
            {
               countT++;
            }
        }

        
        
       
       ll count_Sample = count(str1.begin(),str1.end(),'1');
       ll count_Test = count(str2.begin(),str2.end(),'1');
       ll need_cat = (count_Sample-count_Test);
     
       if(need_cat<0)
       {
        ll a= countT + need_cat;//initialize
        if(a==0)
        {
            cout<<countT<<"\n";
        }
        else{
            ll c = a+ (-1*need_cat);
            cout<<c<<"\n";
        }
       }
       else {
        ll b = countT + need_cat;//initialize&remove
        cout<<b<<"\n";
       }
    }
    return 0;
}