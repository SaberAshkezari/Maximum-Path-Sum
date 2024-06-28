#include "file_reader.hpp"
#include <fstream>
#include <sstream>
#include <iostream>

std::vector<std::vector<int>> readData(const std::string& filename) {
    std::ifstream file(filename);
    std::vector<std::vector<int>> triangle;
    std::string line;

    if (file.is_open()) {
        while (std::getline(file, line)) {
            std::istringstream iss(line);
            int number;
            std::vector<int> row;
            while (iss >> number) {
                row.push_back(number);
            }
            triangle.push_back(row);
        }
        file.close();
    }

    else
    {
        std::cout << "Can't open the file." << std::endl;
    }

    return triangle;
}