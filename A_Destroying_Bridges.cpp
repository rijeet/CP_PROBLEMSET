#include <bits/stdc++.h>
using namespace std;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using ll = long long;
/*
int main()
{
    FAST;
    ll t;

    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll x = (n * (n - 1)) / 2;
        ll score = 1;
        ll con =n-1;

       if(k==0 || k<con){
            cout << n << "\n";
       }
       else if(k>=x || k>=con)
       {
         cout << score << "\n";
       }
       
      
    }

    return 0;
}
*/


int bitwiseXOR(int arr[], int size) {
    int result = 0;
    for (int i = 0; i < size; ++i) {
        result ^= arr[i];
    }
    return result;
}

int main() {
    int arr[] = {6,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = bitwiseXOR(arr, size);
    std::cout << "Bitwise XOR of array elements: " << result << std::endl;
    return 0;
}
