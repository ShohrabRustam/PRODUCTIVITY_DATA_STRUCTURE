#include <iostream>
using namespace std;

bool isSorted(int A[],int size){
    for(int i=0;i<size-1;i++)
            if(A[i] > A[i+1]) 
                return false;
    
    return true;
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
    cout<<endl;
    bool issorted = isSorted(p,size) ;
    if (issorted){
        cout<< "Array is sorted "<<endl;
    }else{
        cout<< "Array is not sorted "<<endl;
    }
   
    cout<< endl;
    return 0;
}