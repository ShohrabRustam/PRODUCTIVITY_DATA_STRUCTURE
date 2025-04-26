#include <iostream>
using namespace std;

void printArray(int Array[],int sizeofArray){
    if (sizeofArray<=0) {
        cout<<endl;
        return;
        }
    
    printArray(Array,sizeofArray-1);

    cout<<Array[sizeofArray-1]<<" ";

    return ;
}
void swapping(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
    return;
}

void shift(int A[],int sizeOfArray,int index=0){

    if(sizeOfArray == index ) {
        return;
    }
 
    if(A[index]>A[index+1])
        swapping(A[index],A[index+1]);
    
        index++;

    shift(A,sizeOfArray,index);

    return;
}

void bubbleSort(int A[],int sizeOfArray, int index=0){
    int size = sizeOfArray;

    if(index == sizeOfArray) return;

    cout<<endl<<"Element after shift step "<<index <<" is : "<<endl;

    printArray(A,sizeOfArray);

    shift(A,size-1);
    
    index++;
    
    bubbleSort(A,sizeOfArray,index);

    return;
}

int main(int argc, const char** argv) {

    int A[] = {178,-2,3,-4,5,55,-10,-1};

    int sizeofArray = sizeof(A)/sizeof(A[0]);
    
    cout<<"Array before sorting : "<<endl;
     
    printArray(A,sizeofArray);
    
    bubbleSort(A,sizeofArray);
    
    printArray(A,sizeofArray);
    cout <<endl;
    return 0;
}