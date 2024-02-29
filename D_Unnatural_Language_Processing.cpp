#include <bits/stdc++.h>
using namespace std;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using ll = long long;

bool isSquare(int n)
{
    int root = sqrt(n);
    return root * root == n;
}

int main()
{
    FAST;
    int t;

    cin >> t;

    while (t--)
    {
        int n;

        cin >> n;
        string a;
        cin >> a;
        string temp = "\0";
        string C = "bcd";
        string V = "ae";
        for (int i = 0; i < n - 2; i++)
        { 
            if (C.find(a[i]) != std::string::npos && V.find(a[i + 1]) != std::string::npos)
            {
                
                      a.insert(i+2, 1, '.');
               

                
            }
        }
         cout << a << "\n";
    }
    return 0;
}