#include <iostream>
using namespace std;
void recursive_head_fun(int n){
    if (n<=0){
        return;
    }
    recursive_head_fun(n-1);
    cout<<n <<" ";
}
int main(){
    recursive_head_fun(5);
    cout<<endl;
    return 0;
    }