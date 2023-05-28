#include <iostream>
using namespace std;
int recursion_func(int n){
    int static static_value = 0;
    if (n>0){
        static_value++;
        return recursion_func(n-1) + static_value;
    }
    return 0;
}
int main(int argc,char **argv){
    int n = 10;
    cout <<"RESULT : "<< recursion_func(n)<<endl;
    return 0;
}