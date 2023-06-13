#include <iostream>
using namespace std;

void leftRotation(int A[],int size){
    int temp = A[0];
    for(int i=0;i<size;i++)
            A[i] = A[i+1];
            A[size-1] = temp;
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
    leftRotation(p,size) ;
    for(int i = 0; i < size; i++){
        cout << p[i] << " ";
    }
    cout<< endl;
    return 0;
}