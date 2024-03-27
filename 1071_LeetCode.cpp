#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    string gcdOfStrings(string str1, string str2)
    {
        int len_str1 = str1.size();
        string temp_str2 = str2;
        int len_str2 = temp_str2.size();
        string temp = "";
        string subtemp = "";
        string temp_match_str2 = "";
        int len_temp = 0;
        int i = 0;
        string substring1 = "";
        string substring2 = "";
        string Str1_substring1 = "";
        
        for (i = len_str2; i >= 2; i--)
        {
            if (len_str2 % i == 0)
            {

                int sub_len = len_str2 / i;

                substring1 = temp_str2.substr(0, sub_len);

                substring2 = temp_str2.substr(sub_len, sub_len);

                Str1_substring1 = str1.substr(0, sub_len);
                // what if small substring is not the sub match ?

                
                if (substring1.compare(substring2) == 0 && substring1.compare(Str1_substring1) == 0)
                {
                    
                    temp_match_str2 = substring1;
                    len_temp = temp_match_str2.size();
                    temp = ""; 
                    while (len_str1 > len_temp)
                    {
                        if (str1.compare(temp) != 0)
                        {
                            temp += temp_match_str2;
                            len_temp = temp.size();
                        }
                    }

                    if (str1.compare(temp) == 0)
                       { 
                         return temp_match_str2;
                       }

                }
            }
        }

        if (temp_match_str2.empty())
        {
            // cout << temp_match_str2<< endl;
            temp_match_str2 = str2;
        }

        len_temp = temp_match_str2.size();

        while (len_str1 > len_temp)
        {
            if (str1.compare(temp) != 0)
            {
                temp += temp_match_str2;
                len_temp = temp.size();
            }
        }

        if (str1.compare(temp) == 0)
            return temp_match_str2;
        else
            return "";
    }
};

int main()
{
    Solution solution;
    int numTests;

    cin >> numTests;

    for (int i = 0; i < numTests; ++i)
    {
        string str1, str2;

        cin >> str1;

        cin >> str2;

        cout << solution.gcdOfStrings(str1, str2) << endl;
    }

    return 0;
}
