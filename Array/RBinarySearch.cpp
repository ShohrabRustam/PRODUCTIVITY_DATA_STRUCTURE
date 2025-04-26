#include <iostream>
using namespace std;

int RBinarySearch(int A[],int low,int high,int searchKey){
     int mid;
 if(low<=high)
 {
        mid=(low+high)/2;
    if(searchKey==A[mid]){
        return mid;
    }else if(searchKey<A[mid]){
        return RBinarySearch(A,low,mid,searchKey);
    }else if(searchKey>A[mid]){
        return RBinarySearch(A,mid+1,high,searchKey);
    }
 }
return -1;
}

int main(int argc, const char** argv) {
    int size ;
    cout <<"Enter the size of the array: "<<endl;
    cin >>size;
    int *p = new int[size];
    for(int i = 0; i < size; i++){
        cout << "enter the "<<i+1<<"th element" << endl;
        cin >> p[i];
    }
    int searchKey;
    cout << "Enter the search key" << endl;
    cin >> searchKey;

    int result = RBinarySearch(p,0,size,searchKey);
    if(result!=-1){
    cout << "Key "<<searchKey << " is Found at : " << result+1 <<" position "<< endl;
    }else{
    cout << "Key "<<searchKey << " is not Found " << endl;

    }
    return 0;
}