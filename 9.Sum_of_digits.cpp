// CodeAbby Problem 9 Sum of digits using C++
/*
====Expected Output====
input data:
3
11 9 1
14 90 232
111 15 111

answer:
1 16 21
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;


int computeDigitSum(int a, int b, int c) {
    int result = a * b + c;
    int digitSum = 0;
    for (char ch : to_string(result)) {
        digitSum += ch - '0';
    }
    return digitSum;
}

int main() {
    vector<vector<int>> testData = {
        {218, 157, 60},
        {192, 108, 105},
        {64, 50, 104},
        {229, 212, 16},
        {396, 87, 104},
        {197, 32, 108},
        {108, 26, 136},
        {211, 159, 78},
        {23, 9, 8},
        {39, 71, 55},
        {394, 25, 79},
        {18, 298, 31},
        {23, 12, 28}
    };

    for (const auto& triplet : testData) {
        int a = triplet[0];
        int b = triplet[1];
        int c = triplet[2];
        cout << computeDigitSum(a, b, c) << " ";
    }

    return 0;
}
