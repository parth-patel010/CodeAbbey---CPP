// CodeAbby Problem 16 Reverse String using C++
/*
====Expected Output====
input data:
four score and seven years ago

answer:
oga sraey neves dna erocs ruof
*/
#include<iostream>
#include <bits/stdc++.h>
int main(){
std::string s[9];
for(int i = 0 ;i<9;i++){
    std::cin >> s[i];
}
for(int i = 8;i>=0;i--){
    
    std::reverse(s[i].begin(),s[i].end());
    std::cout << s[i] << " ";

}
system("pause>0");
}