#include <iostream>
using namespace std;
/*
    a<<3;=> a* 2(power)3 in most of the cases for small numbers
*/
int main(int argc, char** argv){
    int a = 3;
    int c= a<<2; //3 * (2*2)
    cout << "a = " << a <<", a << 2 => " << c <<endl;
}