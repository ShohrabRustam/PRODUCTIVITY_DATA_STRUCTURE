#include <iostream>
using namespace std;
void recursive_fun(int n){
    if (n>=0){
        cout << n << " ";
        recursive_fun(n-1);
    }
    return;
}
int main(int arg,char **argv){
    int n= 5;
    recursive_fun(n);
    cout << endl;
}