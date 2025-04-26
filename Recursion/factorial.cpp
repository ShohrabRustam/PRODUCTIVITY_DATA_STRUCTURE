#include <iostream>
using namespace std;
int factorial(int n){
    if (n<0) return -1;
    if (n==0) return 1;
    return n * factorial(n-1);
}

 int main(int argc, const char** argv) {
    int n = 10;
    cout <<"the factorial of "<<n <<" is : "<<factorial(n) <<endl;
    return 0;
}