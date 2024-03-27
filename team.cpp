#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string str[t];
    string str_output[t];
    int len=0;
    int cnt_1=0;
    int cnt_solve=0;
    int check;
    string temp_str;

    for (int i = 0; i < t; ++i)
    {
        cin >> str[i];
    }

    for (int i = 0; i < t; ++i)
    {


        len = str[i].length();
        temp_str = str[i];
        while(len--)
        {
            check = temp_str[len] - '0';
            if(1==check)
            cnt_1++;
        }
        if(cnt_1>=2)
        {
            cnt_solve++;
            cnt_1=0;
            len=0;
        }
    }

     cout << cnt_solve << endl;

    return 0;
}
