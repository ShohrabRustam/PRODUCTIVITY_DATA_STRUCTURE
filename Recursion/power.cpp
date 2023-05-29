#include <iostream>
using namespace std;
int power(int num,int ex){
    if (ex<0)return -1;
    if (ex == 0){
        return 1;
    }
    return  num * power(num,ex-1);
}
int main(int argc, char **){
    int n = 2, ex = 10;
    cout <<"THE POWER "<<n <<" OF "<<ex <<" IS : "<<power(n,ex)<<endl;
    return 0;
}