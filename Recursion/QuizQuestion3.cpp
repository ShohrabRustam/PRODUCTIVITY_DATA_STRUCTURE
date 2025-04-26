#include <iostream>
using namespace std;
int func(int &a, int b){
    b= b-1;
    if (b==0){
        return 1;
    }
    return a * func(a, b);
}
int main(int argc,char **argv){
    int num = 5;
    int num2 = 5;
    cout << "Result: " << func(num,5) << endl;
}