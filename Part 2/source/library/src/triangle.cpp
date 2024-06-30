#include "triangle.hpp"
#include <vector>
#include <algorithm>

int maximumPathSum(const std::vector<std::vector<int>>& triangle) {
    std::vector<std::vector<int>> dp = triangle;

    for (int row = dp.size() - 2; row >= 0; --row) {
        for (int col = 0; col < dp[row].size(); ++col) {
            dp[row][col] += std::max(dp[row + 1][col], dp[row + 1][col + 1]);
        }
    }

    return dp[0][0];
}