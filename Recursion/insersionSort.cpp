#include <iostream>
using namespace std;
void printArray(int array[],int sizeOfArray){
    
    if(sizeOfArray<0) {
        return;
    }
    
    printArray(array,sizeOfArray-1);

    cout<<array[sizeOfArray]<<" ";

    return;
}

void swapping(int &a,int &b){
    int temp = a;
    a = b;
    a = temp;
    return;
}

// Insert last element at its correct position
// in sorted array.
void shiftingArrayIndexElements(int Array[],int sizeOfArray,int lastElement){
    
    int j = sizeOfArray-2;

    /* Move elements of arr[0..i-1], that are
    greater than key, to one position ahead
    of their current position */
    while (j >= 0 && Array[j] > lastElement)
    {
        Array[j+1] = Array[j];
        j--;
    }
    Array[j+1] = lastElement;

}

void insersionSort(int Array[],int sizeOfArray){
    if (sizeOfArray<=1)
    return;

    insersionSort(Array,sizeOfArray-1);

    shiftingArrayIndexElements(Array,sizeOfArray,Array[sizeOfArray]);

    return;

}

int main(int argc,char **argv){
int A[] = {178,-2,3,-4,5,55,-10,-1};

    int sizeofArray = sizeof(A)/sizeof(A[0]);
    
    cout<<"Array before sorting : "<<endl;
     
    printArray(A,sizeofArray);

    cout<<endl;

    cout<<"Array after sorting : "<<endl;
    insersionSort(A,sizeofArray);

    printArray(A,sizeofArray);

    cout<<endl;
return 0;
}