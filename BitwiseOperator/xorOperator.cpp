#include <iostream>
using namespace std;
/*
    a  b  c = a^b 
    0  0  0 
    0  1  1 
    1  0  1 
    1  1  0 

*/
int main(int argc, char** argv){
    int a = 3;
    int b = 2;
    int c= a^b; // 11 ^ 10 = 01 =>1
    cout << "a = " << a << ", b = " << b << ", a ^ b => " << c <<endl;
}