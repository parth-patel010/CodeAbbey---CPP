// CodeAbby Problem 7 Rounding using C++
/*
====Expected Output====
input data:
3
12 8
11 -3
400 5

answer:
2 -4 80
*/

#include <iostream>
#include <cmath>
using namespace std;

int rounding(int,int);

int main() {
    rounding(-1329795667, 82855);
    rounding(975649221, -89382);
    rounding(-1205745898, -99316);
    rounding(0, 41752);
    rounding(0, -60568);
    rounding(-718188955, 50195);
    rounding(-1015134603, 515166);
    rounding(-1889893873, -79564);
    rounding(306532376, 84016);
    rounding(275586297, 13538);
    rounding(-690620763, -40614);
    rounding(131197586, -18988);

    cout << endl;
    return 0;
}
int rounding(int a, int b) {
    int result = round((double)a / b);
    if (result == 0) result = 0;
    cout << result << " ";
    return 0;
}