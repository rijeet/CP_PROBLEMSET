#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int num;
void printCombinationsWithRepetition(const std::vector<ll> &elements, ll k, std::vector<ll> &combination)
{
    ll lowest = INT_MAX;
    if (k == 0)
    {

        ll temp = std::accumulate(combination.begin(), combination.end(), 0);

        if (temp == num)
        {
            std::sort(combination.begin(), combination.end());
            if (combination[0] < lowest)
            {

                for (int num : combination)
                {
                    std::cout << num << " ";
                }
                std::cout << std::endl;
            }
        }
        return;
    }

    for (int i = 0; i < elements.size(); ++i)
    {
        combination.push_back(elements[i]);

        printCombinationsWithRepetition(elements, k - 1, combination);
        combination.pop_back();
    }
}

int main()
{

    std::vector<ll> elements = {1, 2, 3, 4, 5};

    int k = 3;
    num = 10;
    std::vector<ll> combination;

    printCombinationsWithRepetition(elements, k, combination);

    return 0;
}
