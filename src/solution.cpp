#include<algorithm>
#include"../inc/solution.hpp"

int Solution::minimumTotal(std::vector<std::vector<int>>& triangle)
{
    int row = triangle.size()-1;
    while(--row >= 0)
    {
        for(int idx{0}; idx<triangle[row].size(); ++idx)
        {
            // each element in current row is overwritten by the sum of its own value and the minimum obtainable path sum from rows below
            triangle[row][idx] += std::min(triangle[row+1][idx], triangle[row+1][idx+1]);
        }
    }
    return triangle[0][0];  // peak value now contains the minimum path sum
}