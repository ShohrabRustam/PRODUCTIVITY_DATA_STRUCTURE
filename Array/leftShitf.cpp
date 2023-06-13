#include <iostream>
using namespace std;

void leftShift(int A[],int size){
    for(int i=0;i<size;i++)
            A[i] = A[i+1];
}
int main(int argc, char** argv){
    int size = 10;
    int *p;
     p  = new int[size];
    cout <<"Array Elements: "; 
    for(int i = 0; i < size; i++){
        p[i] = 2*(-i)+1;
        cout<<p[i]<<" ";
    }
    cout<< endl<<"Array Elements After left shift: "; 
    leftShift(p,10) ;
    for(int i = 0; i < size; i++){
        cout << p[i] << " ";
    }
    cout<< endl;
    return 0;
}