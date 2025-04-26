#include <iostream>
using namespace std;
int recursion_func(int n){
    if (n>100){
        return n-10;
    }
    return recursion_func(recursion_func(n+20));
}
int main(){
    int n= 103;
    cout <<"NESTED RECURSION RESULT : " << recursion_func(n) << endl;
}
