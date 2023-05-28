#include <iostream>
using namespace std;
int main(int argc, const char** argv) {
    int a = 10;
    int *ptr = &a;
    cout << " value of a using pointer is : "<<*ptr <<endl;
    *ptr = *ptr + 1;
    cout<<" value of a using pointer is : "<< a <<endl;
    return 0;
}