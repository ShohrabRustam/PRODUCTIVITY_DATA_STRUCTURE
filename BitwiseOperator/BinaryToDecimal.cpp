
#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char **argv){
    int binarynumber;
    cin >>binarynumber;
    int decimalNumber =0,i=0;
    int num = binarynumber;
    while (num)
    {
        int digit = num % 10;
        decimalNumber+=(digit * pow(2,i));
        i++;
        num=num/10;
    }
    cout <<"Binary number of "<<binarynumber <<" is : "<<decimalNumber <<endl;
    
}