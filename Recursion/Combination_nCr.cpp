#include <iostream>
using namespace std;
int Fact[100] = {1,1};
int factorial(int n){
    if(Fact[n]!=-1) return Fact[n];
    
    Fact[n] = n*factorial(n-1);

    return Fact[n];
}
int nCr(int n,int r){
    if(n<0 || r<0 ||  n<r) return -1;
    if (n==r || r==0){
        return 1;
    }
    return (Fact[n])/(Fact[n-r] * Fact[r]);
}
int main(int argc,char **argv){
fill(begin(Fact) + 2, end(Fact), -1);
    int n, r;
    cin >> n >> r;
    int fact = factorial(n);
    cout <<"Value of "<<n <<" C "<<r<<" is : " <<nCr(n,r)<<endl;
    return 0;
}