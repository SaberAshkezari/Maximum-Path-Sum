# Maximum-Path-Sum
## Task
A triangular set of data is given, and the goal is to find the maximum total from top to bottom. As an illustration, by starting at the top of the triangle below and moving to adjacent numbers on the row below, the maximum total from top to bottom is 23.

3  
7 4  
2 4 6  
8 5 9 3  
That is, 3 + 7 + 4 + 9 = 23.  

### Part 1
Find the maximum total from top to bottom of the triangle below.  
75  
95 64  
17 47 82  
18 35 87 10  
20 04 82 47 65  
19 01 23 75 03 34  
88 02 77 73 07 63 67  
99 65 04 28 06 16 70 92  
41 41 26 56 83 40 80 70 33  
41 48 72 33 47 32 37 16 94 29  
53 71 44 65 25 43 91 52 97 51 14  
70 11 33 28 77 73 17 78 39 68 17 57  
91 71 52 38 17 14 91 43 58 50 27 29 48  
63 66 04 68 89 53 67 30 73 16 69 87 40 31  
04 62 98 27 23 09 70 98 73 93 38 53 60 04 23  

### Part 2
Find the maximum total from top to bottom in triangle.txt, a 15K text file containing a triangle with one hundred rows.

Note: This problem has been taken from Projekt Euler.

## Solution Approach
The idea is to start from the bottom of the triangle and move upwards, accumulating the maximum path sums. The start point is the second last row of the triangle. Then, for each element, the maximum of its summation with two children is restored. This approach continues until the first row of the triangle.

## Code
The solutions are written in C++ language. For using Part 1, it's necessary to replace the location of "triangle.txt" in the "main.cpp" file.
