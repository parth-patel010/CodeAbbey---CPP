// CodeAbby Problem 12 Triangle using C++
/*
====Expected Output====
data:
2
3 4 5
1 2 4

answer:
1 0
*/

//Note:- Check Condition A + B > C && A + C > B && B + C > A

#include<iostream>

int main() {
    int n;
    std::cin >> n;
    int arr[n * 3];

    for (int i = 0; i < n * 3; i++) {
        std::cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        int A = arr[i * 3];
        int B = arr[i * 3 + 1];
        int C = arr[i * 3 + 2];

        if (A + B > C && A + C > B && B + C > A) {
            std::cout << 1 << " ";
        } else {
            std::cout << 0 << " ";
        }
    }

    return 0;
}
