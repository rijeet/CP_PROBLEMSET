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
        int n;
        cin >> n;
        vector<int> nums;
        int num1 = 0, num2 = 0, num3 = 0;
        char temp = 'a';
        for (int i = 0; i < 2; i++)
        {
            if (n > 27)
            {
                n = n - 26;
                nums.push_back(26);
            }
            else
            {
                n--;
                nums.push_back(1);
            }
        }
         nums.push_back(n);
         sort(nums.begin(),nums.end());
        cout << static_cast<char>(temp + nums[0] - 1) << static_cast<char>(temp + nums[1] - 1) << static_cast<char>(temp + nums[2] - 1) << "\n";
    }

    return 0;
}
