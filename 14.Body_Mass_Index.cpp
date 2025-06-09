// CodeAbby Problem 14 Body Mass Index using C++
/*
====Expected Output====
input data:
3
80 1.73
55 1.58
49 1.91

answer:
over normal under
*/

/* Note:-
Underweight     -           BMI < 18.5
Normal weight   -   18.5 <= BMI < 25.0
Overweight      -   25.0 <= BMI < 30.0
Obesity         -   30.0 <= BMI
*/

#include<iostream>
#include<cmath>
int main(){
    int n;
    std::cin >> n;
    std::cin.ignore();
    double arr[n*2];
    for(int i=0;i<n*2;i++){
        std::cin >> arr[i];
    }
    
    for(int i = 0;i<n;i++){
        double A = arr[2*i];
        double B = arr[2*i+1];
        double BMI = A/pow(B,2);
        if(BMI < 18.5) std::cout << "under" << " ";
        else if(18.5 <= BMI && BMI < 25.0) std::cout << "normal" << " ";
        else if(25.0 <=BMI && BMI < 30.0) std::cout << "over" << " ";
        else if(30.0 <=BMI ) std::cout << "obese" << " ";
    }
    return 0;
}