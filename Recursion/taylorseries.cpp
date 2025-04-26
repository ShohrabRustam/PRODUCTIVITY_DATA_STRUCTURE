#include <iostream>
using namespace std;
int factorial(int n);
int power(int n,int e);
int power(int n,int e){
    if (e==0) return 1;
    return n * power(n,e-1);
}
double  first =1;

double e(int x,int n) { 
        if (n==0) return 1;
        first =  first + (double) power(x,n)/factorial(n);
        e(x,n-1);
        return first;  
    }
    int factorial(int n) {
        if(n==0) return 1; 
        return n * factorial(n-1);
    }
int main(int arg,char **argv){
    cout<<endl;
    cout<<"OUTPUT : "<<e(5,3)<<endl;
}