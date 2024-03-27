
#include <bits/stdc++.h>
using namespace std;

#include <iostream>
#include <vector>

int main() {
    std::string str1 = "111111101100110011";
    std::string str2 = "100110011111111101";

    // Convert binary strings to vectors of char
    std::vector<char> binary1(str1.begin(), str1.end());
    std::vector<char> binary2(str2.begin(), str2.end());

    // Perform bitwise XOR
    std::vector<char> result(binary1.size(), '0');

    for (size_t i = 0; i < binary1.size(); ++i) {
        if (binary1[i] != binary2[i]) {
            result[i] = '1';
        }
    }

    // Convert the result back to a binary string
    std::string result_str(result.begin(), result.end());

    std::cout << "Result: " << result_str << std::endl;

    return 0;
}

