#include <iostream>
using namespace std;
/*
    a<<3;=> a* 2(power)3 in most of the cases for small numbers
*/
int main(int argc, char** argv){
    int a = 3;
    int c= a<<2; // 11 ^ 10 = 01 =>1
    cout << "a = " << a <<", a << 2 => " << c <<endl;
}