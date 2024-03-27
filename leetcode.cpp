#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numberOfPairs(std::vector<std::vector<int>> &points)
    {
        int count = 0;
        sort(points.begin(), points.end());

        std::cout << "Sorted vector 'points': ";
        for (const auto &point : points)
        {
            std::cout << "[" << point[0] << "," << point[1] << "] ";
        }
        std::cout << std::endl;

        for (int i = 0; i < points.size(); i++)
        {
            for (int j = i + 1; j < points.size(); j++)
            {
                if (points[i][0] <= points[j][0] && points[i][1] >= points[j][1])
                {         count = count + 2;

                    for (int k = j + 1; k < points.size(); k++)
                    {
                        if ((points[i][0] != points[k][0] && points[j][0] != points[k][0] &&
                             points[i][1] != points[k][1] && points[j][1] != points[k][1]) &&
                            !(points[k][0] >= points[i][0] && points[k][0] <= points[j][0]) &&
                            !(points[k][1] >= points[i][1] && points[k][1] <= points[j][1]))
                        {
                            count++;
                        }
                        
                            
                    }
                }
            }
        }

        return count;
    }
};

int main()
{
    Solution solution;

    // Example usage with a vector of points
    std::vector<std::vector<int>> points = {
        {3, 1}, {1, 3}, {1, 1}};

    int result = solution.numberOfPairs(points);

    std::cout << "Number of pairs: " << result << std::endl;

    return 0;
}
