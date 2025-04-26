#include <iostream>
using namespace std;
long long int F[100]  = {0,1};

long long int fibonaccitermOptimization(int n){
     
    if (F[n]!=-1) 
    {
        return F[n];
    }

    F[n] = fibonaccitermOptimization(n-1) + fibonaccitermOptimization(n-2);

    cout<<"term " << n-1  <<" of fib series is : "<< F[n-2]<<endl;  
 
    return F[n];

}
int main(int arg,char **argv){
    fill(begin(F) + 2, end(F), -1);
    int n = 5;

    long long int result  =fibonaccitermOptimization(n);
    cout<<"term " << n  <<" of fib series is : "<< F[n]<<endl;  
    cout <<"fib series "<<n<<"th term is : "<<result<<endl;
}