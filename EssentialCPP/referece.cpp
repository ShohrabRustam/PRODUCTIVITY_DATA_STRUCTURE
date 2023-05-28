#include <iostream>
using namespace std;
 int main(int argc, const char** argv) {
    int a = 10;
    int &reference_wrapper = a;
    cout << a << " " << reference_wrapper <<endl;
    reference_wrapper = reference_wrapper + 1;
    cout<< a << " " << reference_wrapper <<endl;
    return 0;
}