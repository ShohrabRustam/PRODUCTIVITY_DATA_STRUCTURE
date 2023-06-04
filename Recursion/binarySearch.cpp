#include <iostream>
using namespace std;
int binarySearch(int arr[], int leftindex, int rightindex, int x)
{
    if (rightindex >= leftindex) {
        // mid index  of subarray
        int midindex = leftindex + (rightindex - leftindex) / 2;
        // If the element is present at the middle
        // itself
        if (arr[midindex] == x)
            return midindex;
    
        // check in left subarray
        if (arr[midindex] > x)
            return binarySearch(arr, leftindex, midindex - 1, x);
        
        // check in right subarray
        return binarySearch(arr, midindex + 1, rightindex, x);
    }
    // We reach here when element is not
    // present in array
    return -1;
}


int main(int argc, char** argv){
    int A[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(A) / sizeof(A[0]);
    int key = 8;
    int firstindex = 0;
    int result= binarySearch(A,firstindex,size,key);
    if (result==-1){
        cout <<key<<" not found: in array " << result<< endl;
    }else{
        cout <<key<<" found : in array at index " << result<< endl;
    }
    return 0;
}