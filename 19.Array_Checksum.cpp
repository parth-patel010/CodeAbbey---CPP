// CodeAbby Problem 19 Array Checksum using C++
/*
====Expected Output====
input data:
6
3 1 4 1 5 9

answer:
8921379
*/

#include<iostream>

int main(){
    int n;
    std::cin >> n;
    std::cin.ignore();
    long long arr[n];
    for(int i=0;i<n;i++){
        std::cin >> arr[i];
    }
    long long result = 0;
    for(int i=0;i<n;i++){
        result = ((result+arr[i])*113)%10000007;
    }
    std::cout << result;
}