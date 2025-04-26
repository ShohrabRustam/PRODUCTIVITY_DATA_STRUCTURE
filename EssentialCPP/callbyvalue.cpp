#include <iostream>
using namespace std;
int add(int a, int b){
    return a + b;
}
int main(int argc,char  **argv){
    int n = 5;
    int m = 6;
    int sum = add(n,m);//actual parameters
    cout <<n << " + "<<m<<" =  "<< sum  << endl;
}