#include <iostream>
#include <math.h>
using namespace std;
int main(int arg, char **argv){
    int  n;
    cin >>n;
    int ans=0,i=0;
    while(n){
        int bit = n&1;
        ans += (bit*pow(10,i));
        i++;
        n= n >> 1;
    }
    cout <<"Binary of " <<n <<" is : "<< ans << endl;
}