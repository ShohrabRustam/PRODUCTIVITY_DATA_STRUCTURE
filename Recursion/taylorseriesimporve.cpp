#include <iostream>
using namespace std;
double taylorseriesimprove(int x,int n){
    double static p=1, f=1;
    double result;
    // 1 + e/1 + e^2/2! + ------ + e^n/n!;
    if (n==0){
        return 1;
    }

    result = taylorseriesimprove(x,n-1);

    cout << "p" <<p<< endl;
    
    f = f * n;
    
    p = p * x;
    
    return (result +p/f);

}
int main(int argc, const char** argv) {
    cout <<endl;
    cout <<"TAYLOR SERIES RESULT : "<< taylorseriesimprove(5,2)<<endl;
    return 0;
}