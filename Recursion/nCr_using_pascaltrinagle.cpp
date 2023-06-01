#include <iostream>
using namespace std;
int nCr(int n,int r){
    
    if (n < 0 || r>n || r<0) return -1;

    if(n==r || r==0) return 1;

    return nCr(n-1,r-1) + nCr(n-1,r);
}
int main(int argc, char **argv){
    int n,r;
    cin >> n>>r;
    cout << "The value of " << n << " C "<<r << " is : "<<nCr(n,r)<< endl;
    return 0;
}   