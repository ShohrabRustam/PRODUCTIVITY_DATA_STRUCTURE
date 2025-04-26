#include <iostream>
using namespace std;

void printArray(int Array[],int sizeofArray){
    if (sizeofArray==0) {
        return;
        }
    
    printArray(Array,sizeofArray-1);

    cout<<Array[sizeofArray-1]<<" ";

    return ;
}

void partitionOfArray(int A[],int begin,int mid,int end){
    
    int sizeOfLeftArray = mid - begin + 1;
    
    int sizeOfRightArray = end - mid;
    
    int leftArray[sizeOfLeftArray],rightArray[sizeOfRightArray]; 
    
    for(int i=0;i<sizeOfLeftArray;i++)
        leftArray[i] = A[begin+i];
    
    
    for(int j=0;j<sizeOfRightArray;j++)
        rightArray[j] = A[mid+j+1];
        
    int i = 0; /* initial index of first sub-array */  
    int j = 0; /* initial index of second sub-array */   
    int k = begin;  /* initial index of merged sub-array */  
    
    
      while (i < sizeOfLeftArray && j < sizeOfRightArray)    
    {    
        if(leftArray[i] <= rightArray[j])    
        {    
            A[k] = leftArray[i];    
            i++;
        }    
        else
        {    
            A[k] = rightArray[j];    
            j++;    
        }    
        k++;    
    }

    while (i<sizeOfLeftArray)    
    {    
        A[k] = leftArray[i];    
        i++;    
        k++; 
    }    
    
    while (j<sizeOfRightArray)    
    {    
        A[k] = rightArray[j];    
        j++;    
        k++; 
    }    

    return ;

}

void mergeSort(int array[],int begin ,int end){
    
    if(begin<end)
    {
        int mid = (begin + end)/2;

        mergeSort(array,begin,mid);

        mergeSort(array,mid+1,end);
        
        partitionOfArray(array,begin,mid,end);

    }
    return ;

}


int main(int argc, const char** argv) {

    int A[] = {178,-2,3,-4,5,55,-10,-1};

    int sizeofArray = sizeof(A)/sizeof(A[0]);
    
    cout<<"Array before sorting : ";
     
    printArray(A,sizeofArray);

    cout<<endl;
    
    mergeSort(A,0,sizeofArray);
    
    cout<<"Array after sorting : ";

    printArray(A,sizeofArray);

    cout <<endl;
    return 0;
}