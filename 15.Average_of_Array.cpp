// CodeAbby Problem 15 Average of an array using C++
/*
====Expected Output====
input data:
3
2 3 7 0
20 10 0
1 0

answer:
4 15 1
*/

#include <iostream>
#include<cmath>

int main() {
    int n;
    std::cin >> n; 
    std::cin.ignore();

    for (int i = 0; i < n; i++) {
        int num, sum = 0, count = 0;
        while (std::cin >> num && num != 0) {
            sum += num;
            count++;
        }
        if (count == 0)
            std::cout << 0 << " ";
        else
            std::cout << round((float)sum / count) << " ";
    }

    return 0;
}
