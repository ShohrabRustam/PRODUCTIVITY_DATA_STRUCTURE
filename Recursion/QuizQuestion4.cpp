#include <iostream>
using namespace std;

int func(int n){
    int x =1,k;
    if(n==1){
        return x;
    }
    for(k=1;k<n;++k){
        x =x +  func(k) * func(n-k);
    }
    return x;
}
int main(){
    cout <<"result : " << func(5) << endl;

    return 0;
}