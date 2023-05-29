#include <iostream>
using namespace std;
int sumofnaturalnumber(int n){
    if (n < 0) return -1;
    if(n==0) return 0;
    return n + sumofnaturalnumber(n-1);
}
int main(int argc, const char** argv) {
    int n = -100;
    cout <<"sum of "<< n <<" natural number is : "<<sumofnaturalnumber(n)<< endl;
    return 0;
}