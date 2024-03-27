#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tc = 1, ti;
    cin >> tc;

    for (ti = 1; ti <= tc; ++ti)
    {
        int n;
        cin >> n;

        string s;
        int k = 1;
        string temp_string = "\0";
        cin >> s;
        temp_string = s;
        std::set<std::string> distinctStrings;
        distinctStrings.insert(s);
        while (!temp_string.empty())
        {

            temp_string.erase(0, 1);
            distinctStrings.insert(temp_string);
            if (temp_string.size() >= 2)
                temp_string.erase(1, 1);
            distinctStrings.insert(temp_string);
        }
        temp_string = s;

        while (!temp_string.empty())
        {
            if (temp_string.size() >= 2)
                temp_string.erase(1, 1);
            distinctStrings.insert(temp_string);
            temp_string.erase(0, 1);
            distinctStrings.insert(temp_string);
        }
        cout << distinctStrings.size() - 1 << endl;
    }

    return 0;
}