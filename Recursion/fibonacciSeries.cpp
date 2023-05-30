#include <iostream>
using namespace std;
long long int fabinocciseriesterm(int n){
    if (n<0){
        return -1;
    }
    if (n==1 || n==2){
        return n-1;
    }

    return fabinocciseriesterm(n-1) +  fabinocciseriesterm(n-2);
}
int main(int arg,char **argv){
    int n = 5;
    cout <<endl;
    cout <<"fib series "<<n<<" term is :"<< fabinocciseriesterm(n)<<endl;
}