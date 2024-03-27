#include <bits/stdc++.h>
using namespace std;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using ll = long long;


// Function to calculate factorial
unsigned long long factorial(ll n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Function to calculate combination (nCr)
unsigned long long combination(ll n, ll r) {
    if (r > n) {
        return 0; // Invalid combination
    }

    return factorial(n) / (factorial(r) * factorial(n - r));
}





bool areAllElementsSame(const std::vector<ll>& vec) {
    if (vec.empty()) {
        // Handle case for an empty vector, you may choose to return true or false
        return false;
    }

    ll firstElement = vec[0];

    for (size_t i = 1; i < vec.size(); ++i) {
        if (vec[i] != firstElement) {
            return false; // Found an element different from the first one
        }
    }

    return true; // All elements are the same
}







int main()
{
    FAST;
    ll t;

    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        ll m = n;
        std::vector<ll> myVector;
        ll a;
      
        
        while (n--)
        {
            cin >> a;
            
            myVector.push_back(pow(2, a));
          

        }
        ll posible = 0;
    

       
         for (ll i = 0; i <= m - 3; i++)
        {

            for (ll j = i + 1; j <= m - 2; j++)
            {
                ll sum = myVector[i] + myVector[j];
                 
                if (sum > myVector[j + 1])
                {
                    posible++;
                   // cout<<"i "<<i<<" j " <<j<<" sum "<< sum <<" C "<<j + 1<<" "<<myVector[j + 1]<< "\n";
                }
                else
                break;
                
            }
        }

     
     
     
        if (areAllElementsSame(myVector)) {
        
  
            unsigned long long result = combination(m, 3);
            cout << result << "\n";
        }
        else 
        cout << posible << "\n";
       
        
    }

    return 0;
}