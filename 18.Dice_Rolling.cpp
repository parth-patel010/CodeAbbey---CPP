// CodeAbby Problem 18 Dice Rolling using C++
/*
====Expected Output====
6
0.59558786964
0.861037873663
0.385597702116
0.246237673331
0.808033385314
0.0544673665427

answer:
4 6 3 2 5 1
*/

#include<iostream>
#include<iomanip>
#include<cmath>

int main(){
    int n;
    std::cin >> n;
    std::cin.ignore();
    long double arr[n];
    for(int i=0;i<n;i++){
        std::cin >> arr[i];
    }
    for(int i = 0;i<n;i++){
        std::cout << ceil(6*arr[i]) << " ";
    }
    
}