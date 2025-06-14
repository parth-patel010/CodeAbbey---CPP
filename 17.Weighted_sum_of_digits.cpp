// CodeAbby Problem 17 Weighted sum of digits using C++
/*
====Expected Output====
input data:
3
9 15 1776

answer:
9 11 60
*/
// Note:- wsd(1776) = 1 * 1 + 7 * 2 + 7 * 3 + 6 * 4 = 60

#include<iostream>
#include<string>
int main(){
    int n;
    std::cin >> n;
    std::cin.ignore();
    int arr[n];
    std::string number;
    for(int i = 0;i<n;i++){
        std::cin >> arr[i];
    }
    int size = sizeof(arr[n]/arr[0]);
    for(int i = 0;i<n;i++){
        number = std::to_string(arr[i]);
        int wsd = 0;
        for(int j = 0; j<number.length();j++){
            int digit = number[j] - '0';
            int weight = j+1;
            wsd += digit * weight;
        }
        std::cout << wsd << " ";
    }
    
}