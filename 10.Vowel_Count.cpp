// CodeAbby Problem 10 Vowel Count using C++
/*
====Expected Output====
input data:
4
abracadabra
pear tree
o a kak ushakov lil vo kashu kakao
my pyx

answer:
5 4 13 2
*/

// Note:- y is also sometimes vowel.

#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;
    std::cin.ignore();
    std::string s[n];
    for (int i = 0; i < n; i++) {
        std::getline(std::cin, s[i]);
    }
    int count=0;
    for(int i = 0; i < n; i++){
       for (char c : s[i]){
           if(c == 'a'){
               count++;
           }
           else if(c == 'e'){
               count++;
           }
           else if(c == 'i'){
               count++;
           }
           else if(c == 'o'){
               count++;
           }
           else if(c == 'u'){
               count++;
           }
           else if(c == 'y'){
               count++;
           }
           
       }
       std::cout  << count << " ";
       count = 0;
    }
            
}
