#include <bits/stdc++.h>
using namespace std;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using ll = long long;

void printCombinationsWithRepetition(const std::vector<ll> &elements, ll k, std::vector<ll> &combination, ll number)
{   ll lowest = 2147483647;
    if (k == 0)
    {
        ll temp = 0;

        for (int i = 0; i < combination.size(); ++i)
        {
            temp += combination[i];
        }
        if (temp == number)
        {
            std::sort(combination.begin(), combination.end());
            if ( combination[0]<lowest )
            {
                lowest = combination[0];
            }
        }
        return;
    }
    for (ll i = 0; i < elements.size(); ++i)
    {
        combination.push_back(elements[i]);
        printCombinationsWithRepetition(elements, k - 1, combination, number);
        combination.pop_back();
    }
      cout << lowest << "\n";
}

int main()
{
    FAST;
    ll t;

    cin >> t;

    while (t--)
    {
        ll number,numberOfParts;
        std::cin >> number >> numberOfParts;

       vector<ll> elements;
        ll half = ceil(number / 2);
        for (ll i = 1; i < half; i++)
        {
            elements.push_back(i);
        }
for (int num : elements) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
        vector<ll> combination;
       
        ll lowest = 2147483647;

        printCombinationsWithRepetition(elements, numberOfParts, combination, number);

        
    }

    return 0;
}