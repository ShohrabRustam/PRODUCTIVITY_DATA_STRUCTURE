#include <iostream>
using namespace std;

void righRotation(int A[],int size){
    int temp = A[size-1];
    for(int i=0;i<size;i++)
            A[size-i-1] = A[size-i-2];
            A[0] = temp;
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
    cout<< endl<<"Array Elements After Right Roatation: "; 
    righRotation(p,size) ;
    for(int i = 0; i < size; i++){
        cout << p[i] << " ";
    }
    cout<< endl;
    return 0;
}