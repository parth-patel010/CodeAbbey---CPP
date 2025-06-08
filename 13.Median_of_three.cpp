// CodeAbby Problem 13 Median of three using C++
/*
====Expected Output====
data:
3
7 3 5
15 20 40
300 550 137

answer:
5 20 300
*/

//Note:- Check Condition A + B > C && A + C > B && B + C > A

#include<iostream>

int main(){
    int n;
    std::cin >> n;
    std::cin.ignore();
    int arr[n*3];
    
    for(int i = 0; i<n*3;i++){
        std::cin >> arr[i];
    }
    
    for(int i=0;i<n;i++){
        int A = arr[3*i];
        int B = arr[3*i+1];
        int C = arr[3*i+2];
        
    if ((A >= B && A <= C) || (A <= B && A >= C))
        std::cout << A << " ";
    else if ((B >= A && B <= C) || (B <= A && B >= C))
        std::cout << B << " ";
    else
        std::cout << C << " ";
    
    }
    return 0;
}
