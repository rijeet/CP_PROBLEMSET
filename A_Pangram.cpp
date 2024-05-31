#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n < 26)
    {
        cout << "NO"
             << "\n";
    }
    else
    {
        std::map<char, int> charMap;

        for (char c = 'a'; c <= 'z'; ++c)
        {
            charMap[c] = 0;
        }
        bool t = 1;
        for (int i = 0; i < n; i++)
        {
            char c = s[i];
            int cnt = count(s.begin(), s.end(), c);
            int cnt1 = count(s.begin(), s.end(), c + 32);
            int total = cnt + cnt1;
            for (int j = 0; j <total; j++)
            {
                charMap[tolower(c)]++;
            }
            
        }

        for (const auto &pair : charMap)
        {
            if (pair.second == 0)
            {
                t = 0;
                break;
            }
        }

        if (t)
        {
            cout << "YES"
                 << "\n";
        }
        else
            cout << "NO"
                 << "\n";
    }

    return 0;
}
