// CodeAbby Problem 8 Fahrenheit to Celsius using C++
/*
====Expected Output====
data:
5 495 353 168 -39 22
answer:
257 178 76 -39 -6
*/

#include <iostream>
#include <cmath>
using namespace std;

int Celsius(int);

int main() {
    int data[] = {
        476, 470, 78, 525, 37, 472, 538, 153, 280, 593,
        156, 54, 98, 167, 141, 557, 141, 361, 163, 501,
        272, 75, 32, 315, 249, 203, 455, 176, 270, 312,
        355, 350, 57, 197, 36, 506, 216
    };

    int size = sizeof(data) / sizeof(data[0]);

    for (int i = 0; i < size; i++) {
        Celsius(data[i]);
    }

    cout << endl;
    return 0;
}
int Celsius(int fahrenheit) {
    int celsius = round((5.0 / 9) * (fahrenheit - 32));
    cout << celsius << " ";
    return 0;
}
