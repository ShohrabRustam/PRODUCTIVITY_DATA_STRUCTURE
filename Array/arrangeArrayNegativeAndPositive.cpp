#include <iostream>
using namespace std;
void swapping(int &x, int &y){
    int temp = x;
    x= y;
    y = temp;
return;
}
void ArrangeNegativeAndPositive(int A[],int size){
    int i=0;
    int j = size-1;

    while(i<j){
        while(A[i]<0){
            i++;
        }
        while(A[j]>=0){
            j--;
        }
        if(i<j){
            swapping(A[i],A[j]);
        }
    }
   
}
int main(int argc, char** argv){
    int size = 10;
    int *p;
     p  = new int[size];

      for(int i = 0; i < size; i++){
        p[i] = i*(-i);
    }

    for(int i = 0; i < size; i++){
        cout<<p[i]<<"   ";
    }
    cout<<endl;
    ArrangeNegativeAndPositive(p,10);
    for(int i = 0; i < size; i++){
        cout<<p[i]<<"   ";
    }
    cout<<endl;
    return 0;
}