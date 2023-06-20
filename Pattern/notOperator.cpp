#include <iostream>
using namespace std;
int main(int argc, char ** arg){
    int a = 3;
 
    int c= ~a; 
    // 00......11 => ~=> 111...1100 
    // =>2's complement =>00......11
    // =>1's complement =>00......11 + 1
    // =>00......100

    cout << "a = " << a <<", ~a  => " << c <<endl;
}