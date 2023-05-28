#include <iostream>
using namespace std;
void func(int arr[],int size){

    for(int i=0; i<size;i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
    return ;
}
int main(int argc,char **argv){
    int A[5] = {10,12,13,34};
    int sizeofarray = sizeof(A)/sizeof(A[0]);
    func(A,sizeofarray);
}