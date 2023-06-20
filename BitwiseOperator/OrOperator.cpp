#include <iostream>
using namespace std;
/*
    a  b  c = a|b
    0  0  0 
    0  1  1 
    1  0  1 
    1  1  1 

*/

int main(int argc, char ** arg){
    int a = 3;
    int b = 2;
    int c= a|b; // 11 | 10 = 11 =>7
    cout << "a = " << a << ", b = " << b << ", a | b => " << c <<endl;
}