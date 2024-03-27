#include <bits/stdc++.h>
using namespace std;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using ll = long long;

std::string findLexicographicallySmallest(const std::string &str1, const std::string &str2)
{
    return (str1 < str2) ? str1 : str2;
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
        string s = " ";
        cin >> s;
        string temp = s;
        reverse(s.begin(), s.end());
        string concatenat = s + temp;

        string smallestString = findLexicographicallySmallest(temp, concatenat);

        cout << smallestString << "\n";
    }

    return 0;
}