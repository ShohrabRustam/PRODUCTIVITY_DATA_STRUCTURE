#include <iostream>
using namespace std;
int poweroptimize(int n,int ex){
    if (ex<0){
        return -1;
    }
    if (ex==0){
        return 1; 
    }
    if(ex%2==0){
        return poweroptimize(n*n,ex/2);
    }
    return n * poweroptimize(n*n,(ex-1)/2);
}

int main(int argc, char **){
    int n = 2, ex = 30;
    cout <<"THE POWER "<<n <<" OF "<<ex <<" IS : "<<poweroptimize(n,ex)<<endl;
    return 0;
}