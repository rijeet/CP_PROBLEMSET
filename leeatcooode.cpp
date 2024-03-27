#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minOperations(vector<int> &nums, int k)
    {
        int cnt = 0;
        sort(nums.begin(), nums.end());

        int h;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] < k && nums[j] < k)
                {
                    cnt++;
                    sort(nums.begin(), nums.end());
                    int a = nums[0];
                    int b = nums[1];
                    int x = min(a, b);
                    int y = max(a, b);
                    int newNum = (x * 2) + y;
                    nums.erase(nums.begin(), nums.begin() + 2);
                    nums.push_back(newNum);
                    sort(nums.begin(), nums.end());
                }
            }
        }

        return cnt;
    }
};

int main()
{

    vector<int> nums = {2, 11, 10, 1, 3};
    int k = 10;
    Solution sol;
    int result = sol.minOperations(nums, k);
    cout << result << "\n";
    return 0;
}

class Solution
{
public:
    int minOperations(vector<int> &nums, int k)
    {
        int cnt = 0;
        sort(nums.begin(), nums.end());

        while (nums.size() >= 2 && (nums[0] < k && nums[1] < k))
        {
            sort(nums.begin(), nums.end());
            if (nums[0] < k && nums[1] < k)
            {
                cnt++;

                long long a = nums[0];
                long long b = nums[1];
                long long x = min(a, b);
                long long y = max(a, b);
                long long newNum = (x * 2) + y;
                nums.erase(nums.begin(), nums.begin() + 2);
                nums.push_back(newNum);

                sort(nums.begin(), nums.end());
            }
        }

        return cnt;
    }
};