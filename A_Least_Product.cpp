#include <bits/stdc++.h>
using namespace std;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main()
{
    FAST;

    int tc = 1, ti;
    cin >> tc;

    for (ti = 1; ti <= tc; ++ti)
    {
        int n;
        cin >> n;
        int a[n];
        bool zero =false;
        int cnt_Neg =0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i]==0)
            {
                zero =true;
            }
            if(a[i]<0)
            {
                cnt_Neg++;
            }
        }

        if ( cnt_Neg%2!=0 || zero)
        {
            cout << 0 << endl;
        }
        else
        {
           
            /*int number =a[m];
            number = abs(number);

           
            int numDigits = static_cast<int>(log10(number)) + 1;

           
            int msd = number / static_cast<int>(pow(10, numDigits - 1));
           */
            cout << 1 << endl;
            cout <<1<< " " << 0 << endl;
            
        }
    }

    return 0;
}