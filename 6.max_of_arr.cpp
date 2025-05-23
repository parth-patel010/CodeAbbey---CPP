// CodeAbby Problem 6 max of array using C++
/*
====Expected Output====
input data:
1 3 5 7 9 11 ... 295 297 299 300 298 296 ... 12 10 8 6 4 2

answer:
300 1
*/

#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 200;
    int arr[MAX_SIZE];
    int count = 0;

    cout << "\n";
    while (count < MAX_SIZE) {
        int num;
        cin >> num;
        if (num == -1) break;
        arr[count++] = num;
    }

    if (count == 0) {
        cout << ""<< endl;
        return 0;
    }

    int maxVal = arr[0];
    for (int i = 1; i < count; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    cout << ""<< maxVal << endl;
    
    int minVal = arr[0];
    for (int i = 1;i<count;i++){
        if(arr[i]<minVal){
            minVal = arr[i];
        }
    }
    cout << "\t"<< minVal << endl;

    return 0;
}
