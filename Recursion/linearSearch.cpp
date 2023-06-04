#include <iostream>
using namespace std;
int lenearSearch(int A[],int size,int searchelement){
    if (size < 0) return -1;

    if(A[size] == searchelement){
        return size;
    } 
    return lenearSearch(A,size-1,searchelement);
}

int main(int argc, const char** argv) {
    int A[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(A) / sizeof(A[0]);
    int key = 10;
    int result= lenearSearch(A,size,key);
    if (result==-1){
        cout <<key<<" not found: in array " << result<< endl;
    }else{
        cout <<key<<" found : in array at index " << result<< endl;
    }
    return 0;
}