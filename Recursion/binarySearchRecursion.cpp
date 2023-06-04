#include <iostream>
using namespace std;
int binarySearch(int A[], int firstElemetofSubarray, int lastElemetofSubarray, int searchElement)
{
    int midIndexofSubarray = firstElemetofSubarray + (lastElemetofSubarray - firstElemetofSubarray)/2;
    
    if(firstElemetofSubarray>lastElemetofSubarray || firstElemetofSubarray<0 || lastElemetofSubarray<0){
        return -1;
    }
    
    if(A[midIndexofSubarray] == searchElement){
        return midIndexofSubarray;
    } else if(A[midIndexofSubarray] > searchElement){
        return binarySearch(A, firstElemetofSubarray,midIndexofSubarray-1,searchElement);
    }else{
        return binarySearch(A,midIndexofSubarray+1,lastElemetofSubarray,searchElement);
    }
}   


int main(int argc, char** argv){
    int A[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(A) / sizeof(A[0]);
    int key = -10;
    int firstindex = 0;
    int result= binarySearch(A,firstindex,size,key);
    if (result==-1){
        cout <<key<<" not found: in array " << result<< endl;
    }else{
        cout <<key<<" found : in array at index " << result<< endl;
    }
    return 0;
}