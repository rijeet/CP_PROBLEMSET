#include <bits/stdc++.h>
using namespace std;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using ll = long long;
int main()
{
    FAST;
    int t;

    cin >> t;

    while (t--)
    {
        char a, b, c;
        for (int i = 0; i < 3; i++)
        {
            char a, b, c;
            cin >> a >> b >> c;
            string str = "\0";
            str.push_back(a);
            str.push_back(b);
            str.push_back(c);
            if (str.find('?') != std::string::npos)
            {
               if (str.find('A') != std::string::npos  && str.find('B') != std::string::npos )

                {
                    cout << "C"<< "\n";
                    str = "\0";
                }
                if (str.find('A') != std::string::npos  && str.find('C') != std::string::npos)

                {
                    cout << "B" << "\n";
                    str = "\0";
                }
                if (str.find('B') != std::string::npos  && str.find('C') != std::string::npos)

                {
                    cout << "A"<< "\n";
                    str = "\0";
                }
                
            }
            else
             str = "\0";
        }
    }
    return 0;
}