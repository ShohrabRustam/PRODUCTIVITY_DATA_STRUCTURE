#include <iostream>
using namespace std;
int Sum(int A[],int size){
    int Sum =0;
    for(int i=0;i<size;i++){
            Sum+= A[i];
    }
    return Sum;
   
}
int main(int argc, char** argv){
    int size = 10;
    int *p;
     p  = new int[size];

    for(int i = 0; i < size; i++){
        p[i] = 2*(-i);
    }
    cout << Sum(p,10) << endl;
    return 0;
}