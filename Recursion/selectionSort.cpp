#include <iostream>
using namespace std;
// print the element of array using recursion
void printArray(int Array[],int sizeofArray){
    
    if(sizeofArray==0){
        return;
    }
    printArray(Array,sizeofArray-1);
    cout<<Array[sizeofArray-1]<<" ";
}
// swaping the number by call by reference
void swapping(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
    return;
}

int indexOfMinElement(int Arr[],int index,int lastIndex){
    
    if (index == lastIndex) return index;
    
    // Find minimum of remaining elements
    int minIndex = indexOfMinElement(Arr, index+1, lastIndex);
    if(Arr[index] < Arr[minIndex])
    {
        return index;
    }
    return minIndex;

}

// selection sort logic funtionality 
void selectioSort(int A[],int sizeOfArr,int index=0){
        if(sizeOfArr==index) return;

        // getting minimum element index from array
        int minElementIndex = indexOfMinElement(A,index,sizeOfArr);

        // skip the swapping function if same index to swapping else swap
        if (minElementIndex!=index) swapping(A[minElementIndex],A[index]);
        index++;
        selectioSort(A,sizeOfArr,index);

        return;

}


int main(int argc, char **argv){
    
    int A[] = {178,-2,3,-4,5,55,-10,-1};
    int sizeofArray = sizeof(A)/sizeof(A[0]);

    
    cout<<"Array before sorting : "<<endl;
    
    printArray(A,sizeofArray);

    cout<<endl<<"Array after sorting : "<<endl;
    
    selectioSort(A,sizeofArray);
    
    printArray(A,sizeofArray);
    cout<<endl;

    
    return 0;
}