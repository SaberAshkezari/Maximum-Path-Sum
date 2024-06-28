#include "file_reader.hpp"
#include "triangle.hpp"
#include <iostream>
#include <vector>

int main() {
    std::string filename = "triangle.txt";
    std::vector<std::vector<int>> triangle = readData(filename);

    std::cout << "Maximum path sum: " << maximumPathSum(triangle) << std::endl;

    return 0;
}