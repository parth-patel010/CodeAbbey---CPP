// CodeAbby Problem 11 Arithmetic Progression using C++
/*
====Expected Output====
data:
2
5 2 3
3 0 10

answer:
21 30
*/

// Note :- Use formula A + (A + B) + (A + 2B) + (A + 3B) + ...

#include<iostream>

int main() {
    int n;
    std::cin >> n; 
    std::cin.ignore();

    int arr[n * 3];
    for (int i = 0; i < n * 3; i++) {
        std::cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        int A = arr[i * 3];
        int B = arr[i * 3 + 1];
        int N = arr[i * 3 + 2];

        int sum = 0;
        for (int j = 0; j < N; j++) {
            sum += A + j * B;
        }
        std::cout << sum << " ";
    }

    return 0;
}
