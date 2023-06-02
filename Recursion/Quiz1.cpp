#include <iostream>
using namespace std;

int funct(int n){
    int static i;
    if(n>=5) return n;
    
    n=n+i;
    i = i+1;
    return funct(n);
}
int main(int argc,char **argv){
    int n=1;
    cout <<endl;
    cout << "Result : "<<funct(n)<<endl;
    return 0;
}