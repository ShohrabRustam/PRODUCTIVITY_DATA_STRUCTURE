#include <iostream>
using namespace std;
int recursion_func(int n){
    if (n>0){
        return recursion_func(n-1) + n;
    }
    return 0;
}
int main(int argc,char **argv){
    int n = 10;
    cout <<"RESULT : "<< recursion_func(n)<<endl;
    return 0;
}