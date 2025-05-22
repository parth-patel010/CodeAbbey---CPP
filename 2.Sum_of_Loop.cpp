// CodeAbby Problem 2 Sum of Loop using C++
/*
====Expected Output====
input data:
8
10 20 30 40 5 6 7 8

answer:
126
*/

#include <iostream>
using namespace std;

int main() {
    int n,i, sum = 0;
    int arr[50] = {
    45, 791, 1059, 770, 1154, 124, 267, 213, 77, 23, 252, 349, 940, 1165,
    1288, 983, 207, 1068, 171, 1275, 1117, 373, 877, 1250, 388, 1213, 1209,
    937, 574, 149, 862, 595, 226, 362, 15, 981, 631, 655, 332, 620, 1043,
    15, 756, 1056, 638, 807
    };


    for(int i = 0;i<50;i++){
        sum+=arr[i];
    }

    cout << "Total Sum = " << sum << endl;
    return 0;
}
