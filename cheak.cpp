#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;

int main() {
    ll n = 5; // Assuming n is the size of the array
    std::vector<ll> skip_index = {0, 2}; // Initialize skip_index as a vector

    std::vector<ll> vec;

    // Update skip_index during runtime
    skip_index.push_back(3); // Adding index 3 to skip_index

    for (ll j = 0; j < n; j++) {
        // Check if j is in skip_index
        if (std::find(skip_index.begin(), skip_index.end(), j) != skip_index.end()) {
            continue; // Skip this index
        }

        vec.push_back(j); // Push j into vec
    }

    // Printing the vector elements
    for (ll i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
