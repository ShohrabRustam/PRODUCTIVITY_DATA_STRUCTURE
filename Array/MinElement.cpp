#include <iostream>
using namespace std;
int Min(int A[],int size){
    int Min = A[0];
    for(int i=0;i<size;i++){
        if(A[i]<Min)
            Min = A[i];
    }
    return Min;
   
}
int main(int argc, char** argv){
    int size = 10;
    int *p;
     p  = new int[size];

    for(int i = 0; i < size; i++){
        p[i] = 2*(-i);
    }
    cout << Min(p,10) << endl;
    return 0;
}