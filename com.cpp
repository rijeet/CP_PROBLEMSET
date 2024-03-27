#include <bits/stdc++.h>
using namespace std;

// Function to calculate factorial
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Function to calculate combination (nCr)
unsigned long long combination(int n, int r) {
    if (r > n) {
        return 0; // Invalid combination
    }

    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;

    std::cout << "Enter the values of n and r: ";
    std::cin >> n >> r;

    unsigned long long result = combination(n, r);

    std::cout << "Combination of " << n << "C" << r << " is: " << result << std::endl;

    return 0;
}
