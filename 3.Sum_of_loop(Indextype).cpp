// CodeAbby Problem 3 Sum of Loop(IndexType) using C++
/*
====Expected Output====
input data:
8 108
4 100

answer:
116
104
*/

#include<iostream>
using namespace std;

int main(){
    int arr1[12] = {
        249449, 844649, 259251, 52247, 88252, 753774,
        483119, 24149, 237744, 291968, 377739, 746230
    };
    
    int arr2[12] = {
        210207, 215322, 879842, 654197, 975714, 684350,
        891232, 357827, 852093, 890882, 17292, 598807
    };
    
    int sum[12];
    
    for(int i = 0; i < 12; i++){
        sum[i] = arr1[i] + arr2[i];
    }

    for(int i = 0; i < 12; i++){
        cout << sum[i] << '\t';
    }

    return 0;
}
