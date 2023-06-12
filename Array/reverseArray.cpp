#include <iostream>
using namespace std;
void swapping(int &x, int &y) {
    int temp = x;
    x= y;
    y= temp;
}
void reverse(int A[],int size){
    for(int i=0;i<size/2;i++)
            swapping(A[i],A[size-i-1]);
}
int main(int argc, char** argv){
    int size = 10;
    int *p;
     p  = new int[size];
    cout <<"Array Elements: "; 
    for(int i = 0; i < size; i++){
        p[i] = 2*(-i);
        cout<<p[i]<<" ";
    }
    cout<< endl<<"Reverse Array Elements: "; 
    reverse(p,10) ;
    for(int i = 0; i < size; i++){
        cout << p[i] << " ";
    }
    cout<< endl;
    return 0;
}