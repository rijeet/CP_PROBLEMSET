#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string str[t];
    string str_output[t];
    int len=0;
    string temp_str;
    char firstChar;
    char lastChar;
    for (int i = 0; i < t; ++i)
    {
        cin >> str[i];
    }

    for (int i = 0; i < t; ++i)
    {


        len = str[i].length();

        if(len>=10)
        {
            temp_str = str[i];
            firstChar = temp_str[0];
            lastChar = temp_str[len - 1];
            len = len-2;
            temp_str = firstChar + to_string(len) + lastChar;
            cout << temp_str << endl;
        }
        else
            cout << str[i] << endl;
    }


    return 0;
}
