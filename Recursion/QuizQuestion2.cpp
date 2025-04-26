#include <iostream>
using namespace std;

int funct(int n,int sum){
    int k = 0, j = 0;
    if(n==0) return sum;
    k = n%10;
    j = n/10;

    sum = sum + k;

    return funct(j,sum);

    
}
int main(int argc,char **argv){
    int n=10501;
    cout <<endl;
    cout << "Result : "<<funct(n,0)<<endl;
    return 0;
}