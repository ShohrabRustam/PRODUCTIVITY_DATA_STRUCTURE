#include <iostream>
using namespace std;
int main(int argc, char ** arg){
    int a = 3;
    int b = 2;
    int c= a&b; // 11 & 10 = 010 =>2
    cout << "a = " << a << ", b = " << b << ", a & b => " << c <<endl;
}