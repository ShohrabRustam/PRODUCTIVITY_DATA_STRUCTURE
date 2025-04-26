#include <iostream>
using namespace std;
int Max(int A[],int size){
    int Max = A[0];
    for(int i=0;i<size;i++){
        if(A[i]>Min)
            Max = A[i];
    }
    return Max;
   
}
int main(int argc, char** argv){
    int size = 10;
    int *p;
     p  = new int[size];

    for(int i = 0; i < size; i++){
        p[i] = 2*(-i);
    }
    cout << Max(p,10) << endl;
    return 0;
}